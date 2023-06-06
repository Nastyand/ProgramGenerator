#include "methodunitcpp.h"

std::string MethodUnitCpp::compile( unsigned int level ) const
{
    std::string result = generateShift( level );//создаем строку с отступом
    if( m_flags & STATIC ) {//если в флаге есть STATIC
        result += "static "; //добавляем static в строку
    }
    else if( m_flags & VIRTUAL ) {//если в флаге есть VIRTUAL
        result += "virtual "; //добавляем virtual в строку
    }
    result += m_returnType + " ";//добавляем тип возвращаемого значения
    result += m_name + "()";//добавляем имя функции
    if( m_flags & CONST ) {//если в флаге есть CONST
        result += " const"; //добавляем const в строку
    }
    result += " {\n";// переход на следующую строку
    for( const auto& b : m_body) {
        result += b->compile( level + 1 );//добавляем содержимое метода
    }
    result += generateShift( level ) + "}\n";//отступ, закрывающая скобка, следующая строка
    return result;//возвращаем результат
}
