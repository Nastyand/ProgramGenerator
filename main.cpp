#include "unit.h"
#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"
#include "abstractfactory.h"
#include "factorycpp.h"
#include "factorycsharp.h"
#include "factoryjava.h"

//функция генерации кода
std::string generateProgram(std::shared_ptr<AbstractFactory> factory)
{
    auto myClass = factory->CreateClass("MyClass");//создаем класс myClass
    //добавляем в класс методы
    myClass->add(factory->CreateMethod( "testFunc1", "void", 0 ),ClassUnit::PUBLIC);
    myClass->add(factory->CreateMethod( "testFunc2", "void", MethodUnit::STATIC ),ClassUnit::PRIVATE);
    myClass->add(factory->CreateMethod(  "testFunc3", "void", MethodUnit::VIRTUAL | MethodUnit::CONST),ClassUnit::PUBLIC);
    //создаем метод method
    std::shared_ptr< MethodUnit > method = factory->CreateMethod( "testFunc4", "void", MethodUnit::STATIC );
    //добавляем в этот метод оператор вывода
    method->add( factory->CreatePrintOperator( R"(Hello, world!\n)" ) );
    //добавляем этот метод в класс
    myClass->add( method, ClassUnit::PROTECTED );
    //генерируем код данного класса
    return myClass->compile();
}

int main()
{
    std::cout<<"c++ program generation\n"<<std::endl;
    std::cout << generateProgram(std::make_shared<FactoryCpp>()) << std::endl;
    std::cout<<"c# program generation\n"<<std::endl;
    std::cout << generateProgram(std::make_shared<FactoryCSharp>()) << std::endl;
    std::cout<<"java program generation\n"<<std::endl;
    std::cout << generateProgram(std::make_shared<FactoryJava>()) << std::endl;
    return 0;
}
