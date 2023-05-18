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
        return std::shared_ptr<ClassUnit>(new ClassUnitCpp(name));
    }
    std::shared_ptr<MethodUnit> CreateMethod(const std::string& name, const std::string& returnType, unsigned int flags )
    {
        return std::shared_ptr<MethodUnit>(new MethodUnitCpp(name,returnType, flags));
    }
    std::shared_ptr<PrintOperatorUnit> CreatePrintOperator(const std::string& text)
    {
        return std::shared_ptr<PrintOperatorUnit>(new PrintOperatorUnitCpp(text));
    }
};

#endif // FACTORYCPP_H
