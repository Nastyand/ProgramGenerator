#ifndef PRINTOPERATORUNITCSHARP_H
#define PRINTOPERATORUNITCSHARP_H
#include "printoperatorunit.h"

class PrintOperatorUnitCSharp: public PrintOperatorUnit
{
public:
    PrintOperatorUnitCSharp( const std::string& text ):PrintOperatorUnit(text){}
    std::string compile( unsigned int level = 0 ) const
    {
        return generateShift( level ) + "Console.WriteLine( \"" + m_text + "\" );\n";
    }
};

#endif // PRINTOPERATORUNITCSHARP_H
