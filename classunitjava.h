#ifndef CLASSUNITJAVA_H
#define CLASSUNITJAVA_H
#include "classunit.h"

class ClassUnitJava: public ClassUnit
{
public:
    ClassUnitJava( const std::string& name ):ClassUnit(name){}
    std::string compile( unsigned int level = 0 ) const;
};

#endif // CLASSUNITJAVA_H
