#ifndef CLASSUNITCSHARP_H
#define CLASSUNITCSHARP_H
#include "classunit.h"

class ClassUnitCSharp: public ClassUnit
{
public:
    ClassUnitCSharp( const std::string& name ):ClassUnit(name){}
    std::string compile( unsigned int level = 0 ) const;
};

#endif // CLASSUNITCSHARP_H
