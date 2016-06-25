#-------------------------------------------------
#
# Project created by QtCreator 2016-06-20T16:31:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CourseHelper
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    productmodifydialog.cpp \
    recipemodifydialog.cpp \
    product.cpp \
    recipe.cpp \
    shoppinglist.cpp

HEADERS  += mainwindow.h \
    productmodifydialog.h \
    recipemodifydialog.h \
    product.h \
    recipe.h \
    shoppinglist.h

FORMS    += mainwindow.ui \
    productmodifydialog.ui \
    recipemodifydialog.ui
