
#ifndef ABOUT_DIALOG_H
#define ABOUT_DIALOG_H

#include "about.h"
#include <QDialog>

class AboutDialog : public QDialog {
    Ui_Dialog *ui;
public:
    AboutDialog(QWidget *parent=NULL);
    ~AboutDialog();
};

#endif
