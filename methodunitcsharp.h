#ifndef METHODUNITCSHARP_H
#define METHODUNITCSHARP_H
#include "methodunit.h"

class MethodUnitCSharp: public MethodUnit
{
public:
    MethodUnitCSharp(const std::string& name, const std::string& returnType, Flags flags):MethodUnit(name,returnType,flags){}
    std::string compile( unsigned int level = 0 ) const;
};

#endif // METHODUNITCSHARP_H
