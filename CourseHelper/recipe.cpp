#include "recipe.h"

// Constructeur
Recipe::Recipe(std::string new_name, std::vector<Product> new_productList)
  {
    this->name = new_name;
    this->productList = new_productList;
  }
