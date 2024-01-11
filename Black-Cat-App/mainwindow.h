#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    int passwordLen = 0;
    int option = 1;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_GeneratePasswordButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_password_generation_settings_clicked();

private:
    Ui::MainWindow *ui;

    void setOption(int newOption);
};
#endif // MAINWINDOW_H
