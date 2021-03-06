#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QItemSelectionModel>

class ProductModel;

namespace Ui
  {
    class MainWindow;
  }

class MainWindow : public QMainWindow
  {
    Q_OBJECT

    public:
      explicit MainWindow(QWidget *parent = 0);
      ~MainWindow();

    private:
      Ui::MainWindow *ui;

      QItemSelectionModel *productSelection;
      ProductModel *productModel;

    public slots:
      void on_addProduct();
      void on_modifyProduct();
      void on_deleteProduct();

      void checkProductButtons();
  };

#endif // MAINWINDOW_H
