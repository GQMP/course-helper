#include "mainwindow.h"
#include "ui_mainwindow.h"

// Constructeur
MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow)
  {
    ui->setupUi(this);
  }

// Destructeur
MainWindow::~MainWindow()
  {
    delete ui;
  }
