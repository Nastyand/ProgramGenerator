#include "methodunitcsharp.h"
std::string MethodUnitCSharp::compile( unsigned int level ) const
{
    std::string result = generateShift( level );
    if( GetFlags() & STATIC ) {
        result += "static ";
    }
    else if( GetFlags() & VIRTUAL ) {
        result += "virtual ";
    }
    result += GetType() + " ";
    result += GetName() + "()";
    if( GetFlags() & CONST ) {
        result += " const";
    }
    result += " {\n";
    for( const auto& b : GetBody() ) {
        result += b->compile( level +2 );
    }
    result += generateShift( level+1 ) + "}\n";
    return result;
}
