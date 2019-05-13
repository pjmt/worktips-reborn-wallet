#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_worktipswallet.h"

class worktipswallet : public QMainWindow
{
	Q_OBJECT

public:
	worktipswallet(QWidget *parent = Q_NULLPTR);

private:
	Ui::worktipswalletClass ui;
};
