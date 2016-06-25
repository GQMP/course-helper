#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <vector>
#include <QMainWindow>

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
      std::vector<Product> mainProductList;
      std::vector<Recipe> mainRecipeList;
      std::vector<ShoppingList> mainShoppingList;
      Ui::MainWindow *ui;
  };

#endif // MAINWINDOW_H
