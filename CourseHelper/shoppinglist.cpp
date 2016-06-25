#include "shoppinglist.h"

// Constructeur
ShoppingList::ShoppingList(std::string new_name, std::vector<Product> new_productList, std::vector<Recipe> new_recipeList)
  {
    this->name = new_name;
    this->productList = new_productList;
    this->recipeList = new_recipeList;
  }
