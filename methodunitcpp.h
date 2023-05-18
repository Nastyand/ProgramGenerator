#ifndef METHODUNITCPP_H
#define METHODUNITCPP_H
#include "methodunit.h"

class MethodUnitCpp: public MethodUnit
{
public:
    MethodUnitCpp(const std::string& name, const std::string& returnType, Flags flags):MethodUnit(name,returnType,flags){}
    std::string compile( unsigned int level = 0 ) const;
};

#endif // METHODUNITCPP_H
