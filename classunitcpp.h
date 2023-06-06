#ifndef CLASSCPP_H
#define CLASSCPP_H
#include "classunit.h"

class ClassUnitCpp:public ClassUnit
{
public:
    static const std::vector< std::string > ACCESS_MODIFIERS;
    ClassUnitCpp( const std::string& name ):ClassUnit(name){m_fields.resize( ACCESS_MODIFIERS.size() );}
    std::string compile( unsigned int level = 0 ) const;
    void add( const std::shared_ptr< Unit >& unit, Flags flags );
};

#endif // CLASSCPP_H
