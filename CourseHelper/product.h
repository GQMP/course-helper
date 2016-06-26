#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>

class Product
  {
    public:
      enum Measure { Liters, Grams, Quantity };

      QString name;
      Measure measure;
      Product(QString new_name = "", Measure new_measure = Liters);
  };

#endif // PRODUCT_H
