#ifndef SHOPPINGLIST_H
#define SHOPPINGLIST_H

#include <vector>
#include <string>
#include "product.h"
#include "recipe.h"

class ShoppingList
  {
    public:
      std::string name;
      std::vector<Product> productList;
      std::vector<Recipe> recipeList;
      ShoppingList(std::string new_name = "",
                   std::vector<Product> new_productList = std::vector<Product>(0),
                   std::vector<Recipe> new_recipeList = std::vector<Recipe>(0));
  };

#endif // SHOPPINGLIST_H
