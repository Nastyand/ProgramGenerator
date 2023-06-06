#ifndef CLASSCPP_H
#define CLASSCPP_H
#include "classunit.h"

class ClassUnitCpp: public ClassUnit
{
public:
    static const std::vector< std::string > ACCESS_MODIFIERS;//вектор модификаторов доступа
    ClassUnitCpp( const std::string& name ):ClassUnit(name){m_fields.resize( ACCESS_MODIFIERS.size() );}//конструктор
    std::string compile( unsigned int level = 0 ) const;//генерация кода класса на c++
    void add( const std::shared_ptr< Unit >& unit, Flags flags );//добавление в класс
};

#endif // CLASSCPP_H
