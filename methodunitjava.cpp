#include "methodunitjava.h"

std::string MethodUnitJava::compile( unsigned int level ) const
{
    std::string result = generateShift( level );

    if( GetFlags() & ABSTRACT ) {
        result += "abstract ";
    }
    else
    {
        if( GetFlags() & STATIC ) {
            result += "static ";
        }
        if( GetFlags() & FINAL ) {
            result += "final ";
        }
    }
    result += GetType() + " ";
    result += GetName() + "()";
    result += " {\n";
    for( const auto& b : GetBody() ) {
        result += b->compile( level +2 );
    }
    result += generateShift( level+1 ) + "}\n";
    return result;
}
