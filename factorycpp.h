#ifndef FACTORYCPP_H
#define FACTORYCPP_H
#include"abstractfactory.h"
#include "classunitcpp.h"
#include "methodunitcpp.h"
#include "printoperatorunitcpp.h"

class FactoryCpp: public AbstractFactory
{
public:
    std::shared_ptr<ClassUnit> CreateClass(const std::string& name)
    {
        return std::shared_ptr<ClassUnit>(new ClassUnitCpp(name));//создает объект ClassUnitCpp и возвращает указатель на него
    }
    std::shared_ptr<MethodUnit> CreateMethod(const std::string& name, const std::string& returnType, unsigned int flags )
    {
        return std::shared_ptr<MethodUnit>(new MethodUnitCpp(name,returnType, flags));//создает объект MethodUnitCpp и возвращает указатель на него
    }
    std::shared_ptr<PrintOperatorUnit> CreatePrintOperator(const std::string& text)
    {
        return std::shared_ptr<PrintOperatorUnit>(new PrintOperatorUnitCpp(text));//создает объект PrintOperatorUnitCpp и возвращает указатель на него
    }
};

#endif // FACTORYCPP_H
