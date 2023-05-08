#ifndef CLASSCPP_H
#define CLASSCPP_H
#include "classunit.h"

class ClassUnitCpp:public ClassUnit
{
public:
    ClassUnitCpp( const std::string& name ):ClassUnit(name){}
    std::string compile( unsigned int level = 0 ) const;
};

#endif // CLASSCPP_H
