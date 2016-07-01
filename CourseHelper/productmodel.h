#ifndef PRODUCTMODEL_H
#define PRODUCTMODEL_H

#include <QAbstractTableModel>
#include <QDataStream>
#include <vector>
#include "product.h"

class ProductModel : public QAbstractTableModel
  {
    Q_OBJECT

    public:
      std::vector<Product> productList;

    public:
      ProductModel(QObject *parent);
      ~ProductModel();

      int rowCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;
      int columnCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;
      QVariant headerData(int section,Qt::Orientation orientation,int role) const Q_DECL_OVERRIDE;
      QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;
      void sort(int column, Qt::SortOrder order = Qt::AscendingOrder) Q_DECL_OVERRIDE;

      unsigned int nextId() const;
      void erase(int row);
      void push_back(const Product& resp);
      void load(QDataStream &data);
      void save(QDataStream &data);

      std::vector<Product>::reference operator[](std::vector<Product>::size_type row);
      std::vector<Product>::size_type size() const;
  };

#endif // PRODUCTMODEL_H
