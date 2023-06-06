#ifndef CLASSUNITJAVA_H
#define CLASSUNITJAVA_H
#include "classunit.h"

class ClassUnitJava: public ClassUnit
{
public:
    static const std::vector< std::string > ACCESS_MODIFIERS;//вектор модификаторов доступа
    ClassUnitJava( const std::string& name ):ClassUnit(name){m_fields.resize( ACCESS_MODIFIERS.size() );}//конструктор
    std::string compile( unsigned int level = 0 ) const;//генерация кода класса на java
    void add( const std::shared_ptr< Unit >& unit, Flags flags );//добавление в класс
};

#endif // CLASSUNITJAVA_H
