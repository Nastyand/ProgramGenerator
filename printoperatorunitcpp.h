#ifndef PRINTOPERATORUNITCPP_H
#define PRINTOPERATORUNITCPP_H
#include "printoperatorunit.h"

class PrintOperatorUnitCpp: public PrintOperatorUnit
{
public:
    PrintOperatorUnitCpp( const std::string& text ):PrintOperatorUnit(text){}
    std::string compile( unsigned int level = 0 ) const;
};

#endif // PRINTOPERATORUNITCPP_H
