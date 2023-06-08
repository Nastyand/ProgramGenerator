#ifndef CLASSUNITCSHARP_H
#define CLASSUNITCSHARP_H
#include "classunit.h"

class ClassUnitCSharp: public ClassUnit
{
public:
    static const std::vector< std::string >ACCESS_MODIFIERS;//вектор модификаторов доступа
    ClassUnitCSharp( const std::string& name ): ClassUnit(name){m_fields.resize( ACCESS_MODIFIERS.size() );}//конструктор
    std::string compile( unsigned int level = 0 ) const;//генерация кода класса на c#
    void add( const std::shared_ptr< Unit >& unit, Flags flags );//добавления в класс
};

#endif // CLASSUNITCSHARP_H
