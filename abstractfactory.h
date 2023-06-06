#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "unit.h"
#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"

class AbstractFactory
{
public:
    virtual~AbstractFactory()=default;//деструктор
    virtual std::shared_ptr<ClassUnit>CreateClass(const std::string& name) = 0;//создание класса
    virtual std::shared_ptr<MethodUnit> CreateMethod(const std::string& name, const std::string& returnType, unsigned int flags ) = 0;//создание метода
    virtual std::shared_ptr<PrintOperatorUnit> CreatePrintOperator(const std::string& text) = 0;//создание опереатора вывода

};

#endif // ABSTRACTFACTORY_H
