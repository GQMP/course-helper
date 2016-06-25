#ifndef RECIPE_H
#define RECIPE_H

#include <vector>
#include <string>
#include "product.h"

class Recipe
  {
    public:
      std::string name;
      std::vector<Product> productList;
      Recipe(std::string new_name = "", std::vector<Product> new_productList = std::vector<Product>(0));
  };

#endif // RECIPE_H
