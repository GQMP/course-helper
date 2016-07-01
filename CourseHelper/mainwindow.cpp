#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "productmodel.h"
#include "productmodifydialog.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
  {
    ui->setupUi(this);

    productModel = new ProductModel(this);
    productSelection = new QItemSelectionModel(productModel);

    ui->productTableView->setModel(productModel);
    ui->productTableView->setSelectionModel(productSelection);
  }

void MainWindow::on_addProduct()
  {
    ProductModifyDialog dlg(this);

    bool ok = dlg.exec();
    if(!ok)
      return;

    productModel->push_back(dlg.getProduct());
  }

void MainWindow::on_modifyProduct()
  {
  unsigned int row = productSelection->currentIndex().row();

  Product p = (*productModel)[row];
  unsigned int id = p.id;
  ProductModifyDialog dlg(this,p);

  bool ok = dlg.exec();
  if(!ok)
    return;

  (*productModel)[row] = dlg.getProduct();
  (*productModel)[row].id = id;
  }

void MainWindow::on_deleteProduct()
  {
    if(!productSelection->hasSelection())
      return;

    productModel->erase(productSelection->currentIndex().row());
  }

MainWindow::~MainWindow()
  {
    delete ui;
  }
