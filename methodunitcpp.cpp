#include "methodunitcpp.h"

std::string MethodUnitCpp::compile( unsigned int level ) const
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
        result += b->compile( level + 1 );
    }
    result += generateShift( level ) + "}\n";
    return result;
}
