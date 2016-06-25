#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product
  {
    public:
      std::string name;
      enum Measure { liters, grams, quantity };
      Product(std::string new_name = "", Measure new_measure = liters);
  };

#endif // PRODUCT_H
