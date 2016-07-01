#include "mainwindow.h"
#include "productmodifydialog.h"
#include "recipemodifydialog.h"
#include <QApplication>

int main(int argc, char *argv[])
  {
    /* High DPI Scaling */
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);

    /* Lancement fenêtre principale */
    MainWindow w;
    //ProductModifyDialog w;
    //RecipeModifyDialog w;
    w.show();

    return app.exec();
  }
