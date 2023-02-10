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
    void on_qbbOkCancel_clicked(QAbstractButton* button);
};
