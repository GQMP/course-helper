#include "productmodifydialog.h"
#include "ui_productmodifydialog.h"

ProductModifyDialog::ProductModifyDialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::ProductModifyDialog)
  {
  ui->setupUi(this);
  }

ProductModifyDialog::~ProductModifyDialog()
  {
  delete ui;
  }
