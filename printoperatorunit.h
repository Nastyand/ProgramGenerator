#ifndef PRINTOPERATORUNIT_H
#define PRINTOPERATORUNIT_H
#include "Unit.h"

class PrintOperatorUnit : public Unit
{
    public:
        PrintOperatorUnit( const std::string& text ): m_text( text ){}//конструктор
    protected:
        std::string m_text;//текст вывода на экран
};

#endif // PRINTOPERATORUNIT_H
