TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    unit.cpp \
    classunitcpp.cpp \
    methodunitcpp.cpp \
    classunitcsharp.cpp \
    methodunitcsharp.cpp \
    classunitjava.cpp \
    methodunitjava.cpp

HEADERS += \
    unit.h \
    classunit.h \
    methodunit.h \
    printoperatorunit.h \
    abstractfactory.h \
    classunitcpp.h \
    methodunitcpp.h \
    printoperatorunitcpp.h \
    factorycpp.h \
    classunitcsharp.h \
    methodunitcsharp.h \
    printoperatorunitcsharp.h \
    factorycsharp.h \
    classunitjava.h \
    methodunitjava.h \
    printoperatorunitjava.h \
    factoryjava.h
