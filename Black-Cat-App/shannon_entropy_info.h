#ifndef SHANNON_ENTROPY_INFO_H
#define SHANNON_ENTROPY_INFO_H

#include <QWidget>

namespace Ui {
class Shannon_entropy_info;
}

class Shannon_entropy_info : public QWidget
{
    Q_OBJECT

public:
    explicit Shannon_entropy_info(QWidget *parent = nullptr);
    ~Shannon_entropy_info();

private slots:
    void on_Done_button_clicked();

private:
    Ui::Shannon_entropy_info *ui;
};

#endif // SHANNON_ENTROPY_INFO_H
