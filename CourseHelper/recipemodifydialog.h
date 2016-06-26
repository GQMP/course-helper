#ifndef RECIPEMODIFYDIALOG_H
#define RECIPEMODIFYDIALOG_H

#include <QDialog>

namespace Ui
  {
  class RecipeModifyDialog;
  }

class RecipeModifyDialog : public QDialog
  {
    Q_OBJECT

    public:
      explicit RecipeModifyDialog(QWidget *parent = 0);
      ~RecipeModifyDialog();

    private:
      Ui::RecipeModifyDialog *ui;
  };

#endif // RECIPEMODIFYDIALOG_H
