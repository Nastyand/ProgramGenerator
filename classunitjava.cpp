#include "classunitjava.h"

std::string ClassUnitJava::compile( unsigned int level ) const
{
    std::string result = generateShift( level ) + "class " + GetName() + " {\n";
    for( size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i ) {
        if( GetFields(i).empty() ) {
            continue;
        }

        for( const auto& f :GetFields(i) ) {
            result += generateShift( level+1)+ACCESS_MODIFIERS[ i ] + " ";
            result += f->compile( level );
        }
        result += "\n";
    }
    result += generateShift( level ) + "};\n";
    return result;
}
