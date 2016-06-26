#include "recipemodifydialog.h"
#include "ui_recipemodifydialog.h"

RecipeModifyDialog::RecipeModifyDialog(QWidget *parent) :
  QDialog(parent), ui(new Ui::RecipeModifyDialog)
  {
    ui->setupUi(this);
  }

RecipeModifyDialog::~RecipeModifyDialog()
  {
    delete ui;
  }
