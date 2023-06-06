#include "classunitjava.h"

std::string ClassUnitJava::compile( unsigned int level ) const
{
    std::string result = generateShift( level ) + "class " + m_name + " {\n";// создание строки class имя класса, добавление открывающей скобки
    for( size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i ) {//проход по модификаторам
        if( m_fields[i].empty() ) {//если данный элемент вектора m_fields пуст, переходим к следующему
            continue;
        }

        for( const auto& f :m_fields[i] ) {
            result += generateShift( level+1)+ACCESS_MODIFIERS[ i ] + " ";//добавляем в строку модификатор доступа
            result += f->compile( level );//добавляем метод для данного модификатора
        }
    }
    result += generateShift( level ) + "};\n";// добавляем отступ, закрываем скобку класса и переходим на следующую строку
    return result;//возвращаем результат
}
void ClassUnitJava::add( const std::shared_ptr< Unit >& unit, Flags flags )
{
    int accessModifier = PRIVATE;//по умолчанию PRIVATE
    if( flags < ACCESS_MODIFIERS.size() ) {//если флаг меньше векора модификаторов
        accessModifier = flags;//выбираем этот модификатор
    }
    m_fields[ accessModifier ].push_back( unit );//добавляем unit в ветор m_fields
}
//определение модификаторов
const std::vector< std::string > ClassUnitJava:: ACCESS_MODIFIERS = { "public","protected", "private"};
