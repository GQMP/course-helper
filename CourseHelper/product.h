#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>

class Product
  {
    public:
      enum Measure { Quantity, Grams, Liters };

    public:
      unsigned int id;
      QString name;
      Measure measure;

    public:
      Product(QString new_name = "", Measure new_measure = Quantity);
  };

#endif // PRODUCT_H
