#ifndef FACTORYJAVA_H
#define FACTORYJAVA_H
#include"abstractfactory.h"
#include "classunitjava.h"
#include "methodunitjava.h"
#include "printoperatorunitjava.h"

class FactoryJava: public AbstractFactory
{
public:
    std::shared_ptr<ClassUnit> CreateClass(const std::string& name)
    {
        return std::shared_ptr<ClassUnit>(new ClassUnitJava(name));//создает объект ClassUnitJava и возвращает указатель на него
    }
    std::shared_ptr<MethodUnit> CreateMethod(const std::string& name, const std::string& returnType, unsigned int flags )
    {
        return std::shared_ptr<MethodUnit>(new MethodUnitJava(name,returnType, flags));//создает объект MethodUnitJava и возвращает указатель на него
    }
    std::shared_ptr<PrintOperatorUnit> CreatePrintOperator(const std::string& text)
    {
        return std::shared_ptr<PrintOperatorUnit>(new PrintOperatorUnitJava(text));//создает объект PrintOperatorUnitJavaи возвращает указатель на него
    }
};
#endif // FACTORYJAVA_H
