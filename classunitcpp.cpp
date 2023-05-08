#include "classunitcpp.h"
std::string ClassUnitCpp::compile( unsigned int level ) const
{
    std::string result = generateShift( level ) + "class " + GetName() + " {\n";
    for( size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i ) {
        if( GetFields(i).empty() ) {
            continue;
        }
        result += ACCESS_MODIFIERS[ i ] + ":\n";
        for( const auto& f :GetFields(i) ) {
            result += f->compile( level + 1 );
        }
        result += "\n";
    }
    result += generateShift( level ) + "};\n";
    return result;
}
