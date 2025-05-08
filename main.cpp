#include "dllinject.h"
#include "dllinjectgui.h"
#include <QApplication>
#include <QFile>
#include <QMessageBox>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    DLLInjectGUI w;
    w.show();
    return a.exec();
}
