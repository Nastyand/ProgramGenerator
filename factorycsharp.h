#ifndef FACTORYCSHARP_H
#define FACTORYCSHARP_H

#include"abstractfactory.h"
#include "classunitcsharp.h"
#include "methodunitcsharp.h"
#include "printoperatorunitcsharp.h"

class FactoryCSharp: public AbstractFactory
{
public:
    std::shared_ptr<ClassUnit> CreateClass(const std::string& name)
    {
        return std::shared_ptr<ClassUnit>(new ClassUnitCSharp(name));
    }
    std::shared_ptr<MethodUnit> CreateMethod(const std::string& name, const std::string& returnType, unsigned int flags )
    {
        return std::shared_ptr<MethodUnit>(new MethodUnitCSharp(name,returnType, flags));
    }
    std::shared_ptr<PrintOperatorUnit> CreatePrintOperator(const std::string& text)
    {
        return std::shared_ptr<PrintOperatorUnit>(new PrintOperatorUnitCSharp(text));
    }
};
#endif // FACTORYCSHARP_H
