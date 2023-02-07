#include "TotalCommander.h"

TotalCommander::TotalCommander(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

TotalCommander::~TotalCommander()
{}


void TotalCommander::on_pbOK_clicked()
{
    QString name1 = ui.rbKolia->text();
    QString name2 = ui.rbMisha->text();
    QString name3 = ui.rbSvieta->text();
    if (ui.rbKolia->isChecked())
    {
        ui.statusBar->showMessage(name1);
    }
    else
    if (ui.rbMisha->isChecked())
    {
        ui.statusBar->showMessage(name2);
    }
    else
    if (ui.rbSvieta->isChecked())
    {
        ui.statusBar->showMessage(name3);
    }
}