#include <QApplication>
#include "Window/mainWindow/mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	MainWindow w;
	w.show();
    return QApplication::exec();
}
