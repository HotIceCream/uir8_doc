#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <selinux/selinux.h>
namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void initSelinux();
    ~MainWindow();

private slots:
    void on_buttonAllAccess_clicked();

    void on_buttonAdmAccess_clicked();

    int checkAccess(security_context_t buttoncon);

    void on_buttonUserAccess_clicked();

private:
    Ui::MainWindow *ui;
    security_context_t program_context;
};

#endif // MAINWINDOW_H
