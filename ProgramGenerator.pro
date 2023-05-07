TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    unit.cpp \
    classunit.cpp \
    methodunit.cpp \
    printoperatorunit.cpp

HEADERS += \
    unit.h \
    classunit.h \
    methodunit.h \
    printoperatorunit.h
