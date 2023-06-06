#include "unit.h"

void Unit::add( const std::shared_ptr< Unit >& , Flags )
{
    throw std::runtime_error( "Not supported" );//исключение
}

std::string Unit::generateShift( unsigned int level ) const
{
    static const auto DEFAULT_SHIFT = "    ";//величина отступа
    std::string result;//создание строки с результирующим отступом
    for( unsigned int i = 0; i < level; ++i ) {
         result += DEFAULT_SHIFT;//добавление нужного количества отступов
    }
    return result;
}
