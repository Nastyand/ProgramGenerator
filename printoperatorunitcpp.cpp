#include "printoperatorunitcpp.h"

std::string PrintOperatorUnitCpp::compile( unsigned int level ) const
{
    return generateShift( level ) + "printf( \"" + GetText() + "\" );\n";
}

