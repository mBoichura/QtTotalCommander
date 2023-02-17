#include "TotalCommander.h"
#include <qmessagebox.h>

TotalCommander::TotalCommander(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    QString text = ui.teForProgressBar->toPlainText();
    QMessageBox messageBox;
    int count = text.length();
    ui.pbLoading->setValue(count);
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
<<<<<<< Updated upstream
=======
}

void TotalCommander::on_qbbOkCancel_clicked(QAbstractButton* button)
{
    ui.statusBar->showMessage(button->text());
}

void TotalCommander::on_lwSpisok_itemClicked(QListWidgetItem* item)
{
    ui.statusBar->showMessage(item->text());
}

void TotalCommander::on_lwSpisok_itemDoubleClicked(QListWidgetItem* item)
{
    ui.statusBar->showMessage(item->text() + "double clicked");
}

void TotalCommander::on_cbNames_activated(int index)
{
    QMessageBox messageBox;
    messageBox.information(this, "Names", ui.cbNames->currentText());
}

void TotalCommander::on_teForProgressBar_textChanged()
{
    QString text = ui.teForProgressBar->toPlainText();
    QMessageBox messageBox;
    //messageBox.information(this, "Names", text);

    int count = text.length();

    ui.pbLoading->setValue(count);

    if (count > 99)
    {
        ui.pbLoading->setVisible(false);
    }

    int x = ui.dDial->value();
>>>>>>> Stashed changes
}