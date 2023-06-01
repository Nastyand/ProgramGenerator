#ifndef METHODUNITJAVA_H
#define METHODUNITJAVA_H
#include "methodunit.h"

class MethodUnitJava: public MethodUnit
{
public:
    MethodUnitJava(const std::string& name, const std::string& returnType, Flags flags):MethodUnit(name,returnType,flags){}
    std::string compile( unsigned int level = 0 ) const;
};

#endif // METHODUNITJAVA_H
