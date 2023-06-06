#ifndef METHODUNITCPP_H
#define METHODUNITCPP_H
#include "methodunit.h"

class MethodUnitCpp: public MethodUnit
{
public:
    //конструктор
    MethodUnitCpp(const std::string& name, const std::string& returnType, Flags flags):MethodUnit(name,returnType,flags){}
    //генерация кода для метода на с++
    std::string compile( unsigned int level = 0 ) const;
};

#endif // METHODUNITCPP_H
