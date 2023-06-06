#ifndef CLASSUNIT_H
#define CLASSUNIT_H
#include "unit.h"
#include <vector>

class ClassUnit : public Unit
{
    using Fields = std::vector<std::shared_ptr< Unit >>;//определяем псевдоним для вектора указателей на объекты Unit
public:
    enum AccessModifier {//перечесление модификаторов доступа
        PUBLIC,
        PROTECTED,
        PRIVATE,
        PRIVATE_PROTECTED,
        INTERNAL,
        PROTECTED_INTERNAL
    };
    explicit ClassUnit( const std::string& name ):m_name( name ){}//конструктор
protected:
    std::string m_name;//имя класса
    std::vector< Fields > m_fields;//вектор векторов Fields
};

#endif // CLASSUNIT_H
