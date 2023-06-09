#ifndef PRINTOPERATORUNITCSHARP_H
#define PRINTOPERATORUNITCSHARP_H
#include "printoperatorunit.h"

class PrintOperatorUnitCSharp: public PrintOperatorUnit
{
public:
    PrintOperatorUnitCSharp( const std::string& text ):PrintOperatorUnit(text){}//конструктор
    std::string compile( unsigned int level = 0 ) const//генерация кода оператора вывода
    {
        //выводим нужное количество пробелов, заем функцию вывода,
        //затем текст вывода и переходим на новую строку
        return generateShift( level ) + "Console.WriteLine( \"" + m_text + "\" );\n";
    }
};

#endif // PRINTOPERATORUNITCSHARP_H
