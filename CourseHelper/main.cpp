#include "mainwindow.h"
#include "productmodifydialog.h"
#include "recipemodifydialog.h"
#include <QApplication>

int main(int argc, char *argv[])
  {
  QApplication app(argc, argv);

  //MainWindow w;
  //ProductModifyDialog w;
  RecipeModifyDialog w;
  w.show();

  return app.exec();
  }
