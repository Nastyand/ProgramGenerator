#ifndef PRINTOPERATORUNITJAVA_H
#define PRINTOPERATORUNITJAVA_H
#include "printoperatorunit.h"

class PrintOperatorUnitJava: public PrintOperatorUnit
{
public:
    PrintOperatorUnitJava( const std::string& text ):PrintOperatorUnit(text){}//конструктор
    std::string compile( unsigned int level = 0 ) const//генерация кода оператора вывода
    {
        //выводим нужное количество пробелов, заем функцию вывода,
        //затем текст вывода и переходим на новую строку
        return generateShift( level ) + "System.out.println( \"" + m_text + "\" );\n";
    }
};
#endif // PRINTOPERATORUNITJAVA_H
