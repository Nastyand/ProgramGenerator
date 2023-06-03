#include "methodunitjava.h"

std::string MethodUnitJava::compile( unsigned int level ) const
{
    std::string result = generateShift( level );

    if( m_flags & ABSTRACT ) {
        result += "abstract ";
    }
    else
    {
        if( m_flags & STATIC ) {
            result += "static ";
        }
        if( m_flags & FINAL ) {
            result += "final ";
        }
    }
    result += m_returnType + " ";
    result += m_name + "()";
    result += " {\n";
    for( const auto& b : m_body) {
        result += b->compile( level +2 );
    }
    result += generateShift( level+1 ) + "}\n";
    return result;
}
