#include "mainwindow.h"
#include "productmodifydialog.h"
#include "recipemodifydialog.h"
#include <QApplication>

int main(int argc, char *argv[])
  {
    QApplication app(argc, argv);

    /* High DPI Scaling */
    //qputenv("QT_DEVICE_PIXEL_RATIO", QByteArray("2"));
    //app.setAttribute(Qt::AA_EnableHighDpiScaling);

    /* Lancement fenêtre principale */
    MainWindow w;
    //ProductModifyDialog w;
    //RecipeModifyDialog w;
    w.show();

    return app.exec();
  }
