#include "classunitcpp.h"
std::string ClassUnitCpp::compile( unsigned int level ) const
{
    std::string result = generateShift( level ) + "class " + m_name+ " {\n";// создание строки class имя класса, добавление открывающей скобки
    for( size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i ) {//проход по модификаторам
        if( m_fields[i].empty() ) {//если данный элемент вектора m_fields пуст, переходим к следующему
            continue;
        }
        result += ACCESS_MODIFIERS[ i ] + ":\n";//добавляем в строку модификатор доступа и перенос на следующую строку
        for( const auto& f :m_fields[i] ) {
            result += f->compile( level + 1 );//добавляем методы для данного модификатора
        }
        result += "\n";//перенос на следующую строку
    }
    result += generateShift( level ) + "};\n";// добавляем отступ, закрываем скобку класса и переходим на следующую строку
    return result;//возвращаем результат
}
void ClassUnitCpp::add( const std::shared_ptr< Unit >& unit, Flags flags )
{
    int accessModifier = PRIVATE;//по умолчанию PRIVATE
    if( flags < ACCESS_MODIFIERS.size() ) {//если флаг меньше векора модификаторов(если такой модификатор существует)
        accessModifier = flags;//выбираем этот модификатор
    }
    m_fields[ accessModifier ].push_back(unit);//добавляем unit в ветор m_fields
}
//определение модификаторов
const std::vector< std::string > ClassUnitCpp:: ACCESS_MODIFIERS = { "public","protected", "private"};

