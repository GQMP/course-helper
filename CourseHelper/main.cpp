#include "mainwindow.h"
#include "productmodifydialog.h"
#include <QApplication>

int main(int argc, char *argv[])
  {
  QApplication app(argc, argv);

  MainWindow w;
  //ProductModifyDialog w;
  w.show();

  return app.exec();
  }
