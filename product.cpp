#include "product.h"

// Constructeur
Product::Product(std::string new_name, Measure new_measure)
  {
    this->name = new_name;
    this->measure = new_measure;
  }
