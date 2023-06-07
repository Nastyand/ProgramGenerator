Постановка задачи:
Реализована некоторая система, которая способна генерировать код на языке С++, причем, программы только определенного вида.
Требуется реализовать подобную генерацию программ на С# и Java, путем  расширения возможностей предложенной реализации используя фабричные подходы (абстрактная фабрика).
При реализации требуется добавить модификаторы классов и методов, которых нет в C++, но есть в C# и Java.

Предлагаемое решение:
Данная задача решается с помощью паттерна "абстрактная фабрика".
Абстрактная фабрика представляет собой некоторый полиморфный базовый класс, назначением которого является объявление интерфейсов фабричных методов, служащих для создания продуктов всех основных типов (один фабричный метод на каждый тип продукта). Производные от него классы, реализующие эти интерфейсы,предназначены для создания продуктов всех типов внутри семейства или группы.
В нашем случае имеются три класса: ClassUnit, MethodUnit, PrintOperatorUnit, которые являются абстрактными классами для объектов, реализованных для некоторых групп. Группами в данном случае являются языки программирования c++, c# и java. И для каждой группы созданы конкретные объекты, например, для языка c++ это классы: ClassUnitCpp, MethodUnitСpp, PrintOperatorUnitСpp, аналогично для языков c# и java.
Также в данной програме есть класс AbstractFactory и производные от него фабрики, создающие конкретные объекты: FactoryCpp, FactoryCSharp, FactoryJava.

![UML](https://github.com/Nastyand/ProgramGenerator/commit/61f1e239e6eca6d12c2b0f76f00b129ec89b5980)
