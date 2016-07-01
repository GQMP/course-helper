#ifndef PRODUCTMODIFYDIALOG_H
  #define PRODUCTMODIFYDIALOG_H

  #include <QDialog>
  #include "product.h"

namespace Ui
  {
    class ProductModifyDialog;
  }

class ProductModifyDialog : public QDialog
  {
    Q_OBJECT

    public:
      explicit ProductModifyDialog(QWidget *parent = 0);
      explicit ProductModifyDialog(QWidget *parent,Product p);
      ~ProductModifyDialog();

    Product getProduct() const;

    private:
      Ui::ProductModifyDialog *ui;

    public slots:
      void checkDialog();
  };

#endif // PRODUCTMODIFYDIALOG_H
