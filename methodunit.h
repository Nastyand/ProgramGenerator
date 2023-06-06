#ifndef METHODUNIT_H
#define METHODUNIT_H

#include "unit.h"
#include <vector>

class MethodUnit : public Unit
{
    public:
        enum Modifier {  //перечисление модификаторов доступа
            STATIC = 1,
            CONST = 1 << 1,
            VIRTUAL = 1 << 2,
            FINAL = 1 << 3,
            ABSTRACT =1 << 4
        };
        //конструктор
        MethodUnit( const std::string& name, const std::string& returnType, Flags flags ) :m_name( name ), m_returnType( returnType ), m_flags( flags ){}
        //добавление в меод
        void add( const std::shared_ptr< Unit >& unit, Flags /* flags */ = 0 )
        {
            m_body.push_back( unit );//добавляем unit в ветор m_body
        }
    protected:
        std::string m_name;//название меода
        std::string m_returnType;//тип возвращаемого значения
        Flags m_flags;//флаги(модификаторы)
        std::vector< std::shared_ptr< Unit >> m_body;//вектор указателей на объекты Unit
};

#endif // METHODUNIT_H
