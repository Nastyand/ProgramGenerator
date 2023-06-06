#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <memory>

class Unit
{
    public:
        using Flags = unsigned int;//определяем псевдоним для типа unsigned int
        virtual ~Unit() = default;//деструктор
        virtual void add( const std::shared_ptr< Unit >&, Flags );//добавление вложенных элементов
        virtual std::string compile( unsigned int level = 0 ) const = 0;//генерация кода
    protected:
        virtual std::string generateShift( unsigned int level ) const;//возвращает нужное число пробелов
};

#endif // UNIT_H
