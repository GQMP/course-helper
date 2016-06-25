#ifndef PRODUCTMODIFYDIALOG_H
  #define PRODUCTMODIFYDIALOG_H

  #include <QDialog>

namespace Ui {
class ProductModifyDialog;
}

class ProductModifyDialog : public QDialog
  {
  Q_OBJECT

  public:
    explicit ProductModifyDialog(QWidget *parent = 0);
    ~ProductModifyDialog();

  private:
    Ui::ProductModifyDialog *ui;
  };

#endif // PRODUCTMODIFYDIALOG_H
