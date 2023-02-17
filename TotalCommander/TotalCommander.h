#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TotalCommander.h"

class TotalCommander : public QMainWindow
{
    Q_OBJECT

public:
    TotalCommander(QWidget *parent = nullptr);
    ~TotalCommander();

private:
    Ui::TotalCommanderClass ui;

private slots:
    void on_pbOK_clicked();
<<<<<<< Updated upstream
=======
    void on_qbbOkCancel_clicked(QAbstractButton* button);
    void on_lwSpisok_itemClicked(QListWidgetItem* item);
    void on_lwSpisok_itemDoubleClicked(QListWidgetItem* item);
    void on_cbNames_activated(int index);
    void on_teForProgressBar_textChanged();
>>>>>>> Stashed changes
};
