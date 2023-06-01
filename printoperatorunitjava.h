#ifndef PRINTOPERATORUNITJAVA_H
#define PRINTOPERATORUNITJAVA_H
#include "printoperatorunit.h"

class PrintOperatorUnitJava: public PrintOperatorUnit
{
public:
    PrintOperatorUnitJava( const std::string& text ):PrintOperatorUnit(text){}
    std::string compile( unsigned int level = 0 ) const
    {
        return generateShift( level ) + "System.out.println( \"" + GetText() + "\" );\n";
    }
};
#endif // PRINTOPERATORUNITJAVA_H
