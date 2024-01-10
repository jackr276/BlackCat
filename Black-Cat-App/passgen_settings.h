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
    explicit PassGen_Settings(QWidget *parent = nullptr);
    ~PassGen_Settings();

private:
    Ui::PassGen_Settings *ui;
};

#endif // PASSGEN_SETTINGS_H
