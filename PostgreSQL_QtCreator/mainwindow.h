#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableView>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_Close_clicked();

    void on_pushButton_List_clicked();

    void on_pushButton_Connect_clicked();

    void on_pushButton_Clear_clicked();

    void on_pushButton_Insert_clicked();

    void on_pushButton_Remove_clicked();

    void on_actionE_xit_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
