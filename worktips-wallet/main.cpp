#include "worktipswallet.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	worktipswallet w;
	w.show();
	return a.exec();
}
