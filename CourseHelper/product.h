#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product
  {
    public:
      enum Measure { Liters, Grams, Quantity };

      std::string name;
      Measure measure;
      Product(std::string new_name = "", Measure new_measure = Liters);
  };

#endif // PRODUCT_H
