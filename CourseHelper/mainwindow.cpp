#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "productmodifydialog.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
  {
    ui->setupUi(this);
  }

void MainWindow::on_addProduct()
  {
    ProductModifyDialog w(this, true);
    w.exec();
  }

MainWindow::~MainWindow()
  {
    delete ui;
  }
