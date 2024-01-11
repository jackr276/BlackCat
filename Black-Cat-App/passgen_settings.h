#ifndef PASSGEN_SETTINGS_H
#define PASSGEN_SETTINGS_H

#include <QDialog>

namespace Ui {
class PassGen_Settings;
}

class PassGen_Settings : public QDialog
{
    Q_OBJECT

public:
    explicit PassGen_Settings(QWidget *parent=nullptr);
    ~PassGen_Settings();

private slots:

    void on_Accept_button_clicked();

    void on_LCG_Select_toggled(bool checked);

    void on_MDG_Select_toggled(bool checked);

    void on_Accept_button_2_clicked();

private:
    Ui::PassGen_Settings *ui;
};

#endif // PASSGEN_SETTINGS_H
