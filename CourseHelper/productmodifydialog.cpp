#include "productmodifydialog.h"
#include "ui_productmodifydialog.h"

ProductModifyDialog::ProductModifyDialog(QWidget *parent,bool isNew) :
  QDialog(parent),
  ui(new Ui::ProductModifyDialog)
  {
  ui->setupUi(this);

  if(isNew)
    {
    ui->okButton->setText(tr("Ajouter"));
    this->setWindowTitle(tr("Ajouter un produit"));
    ui->groupBox->setTitle(tr("Ajouter un produit"));
    }
  }

ProductModifyDialog::~ProductModifyDialog()
  {
  delete ui;
  }
