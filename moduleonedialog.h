//模块一 验证是否为命题公式
#ifndef MODULE_ONE_DIALOG
#define MODULE_ONE_DIALOG

#include "module_one.h"
#include <QDialog>

class ModuleOneDialog : public QDialog {
Q_OBJECT
private:
    Ui_Dialog *ui;
public:
    ModuleOneDialog(QWidget *parent=NULL);
    ~ModuleOneDialog();
public slots:
    void deal();
    void clearText(QString);
};

#endif