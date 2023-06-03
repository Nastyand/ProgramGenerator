#include "methodunitcsharp.h"
std::string MethodUnitCSharp::compile( unsigned int level ) const
{
    std::string result = generateShift( level );
    if( m_flags & STATIC ) {
        result += "static ";
    }
    else if( m_flags & VIRTUAL ) {
        result += "virtual ";
    }
    result += m_returnType + " ";
    result += m_name + "()";
    result += " {\n";
    for( const auto& b : m_body ) {
        result += b->compile( level +2 );
    }
    result += generateShift( level+1 ) + "}\n";
    return result;
}
