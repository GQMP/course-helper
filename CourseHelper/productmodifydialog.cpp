#include "productmodifydialog.h"
#include "ui_productmodifydialog.h"

ProductModifyDialog::ProductModifyDialog(QWidget *parent) :
  QDialog(parent), ui(new Ui::ProductModifyDialog)
  {
    ui->setupUi(this);

    auto size = this->size();
    this->setMaximumSize(size);
    this->setMinimumSize(size);

    checkDialog();
  }

ProductModifyDialog::ProductModifyDialog(QWidget *parent,Product p) :
  ProductModifyDialog(parent)
  {
    ui->okButton->setText(tr("Modifier"));
    this->setWindowTitle(tr("Modifier un produit"));
    ui->groupBox->setTitle(tr("Modifier un produit"));

    ui->productName->setText(p.name);
    static const int msToCb[] = { 0,1,2 };
    ui->productMeasure->setCurrentIndex(msToCb[(int)p.measure]);

    checkDialog();
  }

ProductModifyDialog::~ProductModifyDialog()
  {
    delete ui;
  }

Product ProductModifyDialog::getProduct() const
  {
    static const Product::Measure cbToMs[] = {
      Product::Quantity,
      Product::Grams,
      Product::Liters
    };

    Product p;

    p.name = ui->productName->text();
    p.measure = cbToMs[ui->productMeasure->currentIndex()];

    return p;
  }

void ProductModifyDialog::checkDialog()
  {
    ui->okButton->setEnabled(!ui->productName->text().isEmpty());
  }



