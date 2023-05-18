#include "methodunit.h"

void MethodUnit::add( const std::shared_ptr< Unit >& unit, Flags )
{
    m_body.push_back( unit );
}

