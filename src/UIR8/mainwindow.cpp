#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <selinux/av_permissions.h>
#include <selinux/flask.h>
#include <selinux/avc.h>
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initSelinux();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonAllAccess_clicked()
{
    security_context_t buttoncon = "user_u:object_r:mybutton_green_t:s0";
    checkAccess(buttoncon);
}

void MainWindow::initSelinux()
{
    getcon(&program_context);
    qDebug()<<"Program context = " << program_context;
    selinux_opt *opt = new selinux_opt();
    opt->type = 1;
    opt->value = "avc";
    avc_open(opt, AVC_OPT_SETENFORCE);
}

void MainWindow::on_buttonAdmAccess_clicked()
{
    security_context_t buttoncon = "user_u:object_r:mybutton_red_t:s0";
    checkAccess(buttoncon);
}

void MainWindow::on_buttonUserAccess_clicked()
{
    security_context_t buttoncon = "user_u:object_r:mybutton_yellow_t:s0";
    checkAccess(buttoncon);
}


int MainWindow::checkAccess(security_context_t buttoncon){
    security_id_t myid = NULL;
    struct av_decision avd = {0, 0, 0, 0, 0,0};
    security_id_t buttonid = NULL;
    avc_context_to_sid(program_context, &myid);
    avc_context_to_sid(buttoncon, &buttonid);
    //security_class_t SECCLASS_MYBUTTON = string_to_security_class("mybutton");
    //access_vector_t MYBUTTON__CLICK = string_to_av_perm(SECCLASS_MYBUTTON, "click");
    qDebug()<<myid->ctx<<myid->refcnt;
    qDebug()<<buttonid->ctx<<buttonid->refcnt;
    access_vector_t av=0;
    int length=security_compute_av(program_context,buttoncon,SECCLASS_MYBUTTON,av,&avd);
    int result = avc_has_perm(myid, buttonid, SECCLASS_MYBUTTON, MYBUTTON__CLICK , NULL, &avd);

    QMessageBox msgBox;
    if (result!=0&&(errno==EACCES)){
        qDebug()<<"Errno="<<errno;
        msgBox.setText(tr("Access deny"));
    } else if (result==0){
        msgBox.setText(tr("Access allowed"));
    } else {
        msgBox.setText(tr("Error "));
        qDebug()<<"errno="<<errno;
    }
    msgBox.exec();
    qDebug()<<"Length="<<length;
    qDebug()<<avd.allowed<<avd.auditallow<<avd.auditdeny<<avd.decided<<avd.flags<<avd.seqno;
    //freecon(buttoncon);
    return result;
}




