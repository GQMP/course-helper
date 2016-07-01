#include <functional>
#include <algorithm>
#include "productmodel.h"

// Constructeur
ProductModel::ProductModel(QObject *parent) :
  QAbstractTableModel(parent)
  {
    // TODO
  }

// Destructeur
ProductModel::~ProductModel()
  {
    // TODO
  }

// Nombre de lignes (Produits)
int ProductModel::rowCount(const QModelIndex & /* parent */) const
  {
    return productList.size();
  }

// Nombre de colonnes (Caractéristiques des produits)
int ProductModel::columnCount(const QModelIndex & /* parent */) const
  {
    return 2; // Modifiable
  }

// Caractéristique des produits
QVariant ProductModel::headerData(int section, Qt::Orientation orientation, int role) const
  {
    static const QString headers[] =
      {
        tr("Produit"),
        tr("Mesure"),
      };

    if(orientation == Qt::Horizontal && role == Qt::DisplayRole)
      return QVariant(headers[section]);

    return QVariant();
  }

// Caractéristiques effectives des produits
QVariant ProductModel::data(const QModelIndex &index, int role) const
  {
    static const QString measure[] =
      {
        tr("Quantité"),
        tr("Grammes"),
        tr("Litres")
      };

    if(role == Qt::DisplayRole)
      {
        const Product &prod = productList.at(index.row());

        switch(index.column())
          {
            case 0 :
              return prod.name;
            case 1 :
              return measure[prod.measure];
            default:
              return QVariant();
          }
      }
    return QVariant();
  }

// Tri des produits selon leurs caractéristiques
void ProductModel::sort(int column, Qt::SortOrder order)
  {
    static const std::function<bool(const Product& a,const Product& b)> sortAscFuncs[] =
      {
        [](const Product& a,const Product& b) {
            return a.name < b.name;
        },
        [](const Product& a,const Product& b) {
            return a.measure < b.measure;
        }
      };
    static const std::function<bool(const Product& a,const Product& b)> sortDscFuncs[] =
      {
        [](const Product& a,const Product& b) {
            return a.name > b.name;
        },
        [](const Product& a,const Product& b) {
            return a.measure > b.measure;
        }
      };

    // Changement visuel
    emit layoutAboutToBeChanged();
    std::stable_sort(productList.begin(), productList.end(), order == Qt::AscendingOrder ? sortAscFuncs[column] : sortDscFuncs[column]);
    emit layoutChanged();
  }

// Récupération du prochain id pour le produit
unsigned int ProductModel::nextId() const
  {
    unsigned int newId = 0;
    for(const Product& prod : productList)
      {
        newId = std::max(newId, prod.id+1);
      }
    return newId;
  }

// Suppression d'un produit
void ProductModel::erase(int row)
  {
    if(row < 0 || (unsigned int)row >= productList.size())
      return;

    // Changement visuel
    emit layoutAboutToBeChanged();
    productList.erase(productList.begin() + row);
    emit layoutChanged();
  }

// Ajout d'un produit
void ProductModel::push_back(const Product& prod)
  {
    emit layoutAboutToBeChanged();
    productList.push_back(prod);
    emit layoutChanged();
  }

std::vector<Product>::reference ProductModel::operator[](std::vector<Product>::size_type row)
  {
    return productList[row];
  }

std::vector<Product>::size_type ProductModel::size() const
  {
    return productList.size();
  }

// Chargement des produits
void ProductModel::load(QDataStream &data)
  {
    // TODO
  }

// Sauvegarde des produits
void ProductModel::save(QDataStream &data)
  {
    // TODO
  }
