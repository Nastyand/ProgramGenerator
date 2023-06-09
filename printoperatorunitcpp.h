#ifndef PRINTOPERATORUNITCPP_H
#define PRINTOPERATORUNITCPP_H
#include "printoperatorunit.h"

class PrintOperatorUnitCpp: public PrintOperatorUnit
{
public:
    PrintOperatorUnitCpp( const std::string& text ):PrintOperatorUnit(text){}//конструктор
    std::string compile( unsigned int level = 0 ) const//генерация кода оператора вывода
    {
        //выводим нужное количество пробелов, заем функцию вывода,
        //затем текст вывода и переходим на новую строку
        return generateShift( level ) + "printf( \"" + m_text + "\" );\n";
    }
};

#endif // PRINTOPERATORUNITCPP_H
