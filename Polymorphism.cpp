//Для прошлого задания
//(
//
//    Создайте иерархию классов на основе класса Фигура.
//    Должны быть описаны классы Квадрат, Прямоугольник, Треугольник, Круг, Куб, Шар.
//    --Реализовать конструкторы,
//    --Методы, выводящие информацию о фигуре(название и тип),
//    --Методы, считающие площадь, периметр и объем(где он есть)
//)
// 
// 
//Добавьте следующие возможности :
//--Базовый класс должен быть абстрактным
//--Создать динамический массив на n элементов(вводится пользователем) и добавить в него набор различных фигур случайным образом
//--Найти фигуру с самой большой площадью.Если таких фигур несколько вывести все
//--Перегрузить операторы ввода и вывода для фигур
//--Результат вывести в файл
//--Классы разбить по файлам

#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#define _MATH_DEFINES_DEFINED
#include <cmath>
#include <math.h>
#include <typeinfo>

using namespace std;


class Shape
{
protected:
    string name;
public:
    // Shape(string name)
    //{
    //    this->name = name;
    //}

    //получить имя
    virtual string get_name()
    {
        return "Его зовут : " + name;
    }
};



class Square : public Shape
{
private:
    string name;
    int sideA;
public:
    Square(string name, int sideA)
    {
        this->name = name;
        this->sideA = sideA;
    }

    //получить имя
    string get_name()
    {
        return "Его зовут : " + name;
    }

    string get_type()
    {
        string type;
        type = "Square";
        return "Эта фигура типа: " + type;
        //type = typeid.name(); // << std::endl;
        //type.erase(0, 6);
        //cout << type;

    }

    // вычислЯем периметр
    int get_perimeter()
    {
        return sideA * 4;
    }

    // вычислЯем площадь
    int get_square()
    {
        return sideA * sideA;
    }
};

class Rectangle : public Square
{
private:
    string name;
    int sideA;
    int sideB;
public:
    Rectangle(string name, int sideA, int sideB) : Square(name, sideA)
    {
        this->name = name;
        this->sideA = sideA;
        this->sideB = sideB;
    }

    //получить имя
    string get_name()
    {
        return "Его зовут : " + name;
    }

    string get_type()
    {
        string type;
        type = "Rectangle";
        return "Эта фигура типа: " + type;

    }


    // вычислЯем периметр
    int get_perimeter()
    {
        return 2 * (sideA + sideB);
    }

    // вычислЯем площадь
    int get_square()
    {
        return sideA * sideB;
    }
};


class Triangle : public Shape
{
private:
    string name;
    int sideA;
    int sideB;
    int sideC;
public:
    Triangle(string name, int sideA, int sideB, int sideC)
    {
        this->name = name;
        this->sideA = sideA;
        this->sideB = sideB;
        this->sideC = sideC;
    }
    string get_name()
    {
        return "Его зовут : " + name;
    }

    //получить тип
    string get_type()
    {
        string type;
        type = "Rectangle";
        return "Эта фигура типа: " + type;

    }

    // вычислЯем периметр
    int get_perimeter()
    {
        return sideA + sideB + sideC;
    }

    // вычислЯем площадь
    double get_square()
    {
        double p = (sideA + sideB + sideC) / 2;
        return sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
    }
};



class Circle : public Shape
{
private:
    string name;
    int radius;
public:
    Circle(string name, int radius)
    {
        this->name = name;
        this->radius = radius;
    }

    //получить имя
    string get_name()
    {
        return "Его зовут : " + name;
    }

    //получить тип
    string get_type()
    {
        string type;
        type = "Rectangle";
        return "Эта фигура типа: " + type;

    }

    // вычислЯем периметр
    double get_perimeter()
    {
        double PI = acos(-1.);
        return 2 * radius * PI;
    }

    // вычислЯем площадь
    double get_square()
    {
        double PI = acos(-1.);
        return pow(radius, 2) * PI;
    }
};



class Cube : public Shape
{
private:
    string name;
    int sideA;
public:
    Cube(string name, int sideA)
    {
        this->name = name;
        this->sideA = sideA;
    }

    //получить имя
    string get_name()
    {
        return "Его зовут : " + name;
    }

    //получить тип
    string get_type()
    {
        string type;
        type = "Rectangle";
        return "Эта фигура типа: " + type;

    }

    // вычислЯем периметр
    int get_perimeter()
    {
        return sideA * 12;
    }

    // вычислЯем площадь
    int get_square()
    {
        return 6 * sideA * sideA;
    }

    // вычислЯем объем
    int get_volume()
    {
        return sideA * sideA * sideA;
    }

};

class Ball : public Shape
{
private:
    string name;
    int radius;
public:
    Ball(string name, int radius)
    {
        this->name = name;
        this->radius = radius;
    }
    //получить имя
    string get_name()
    {
        return "Его зовут : " + name;
    }

    //получить тип
    string get_type()
    {
        string type;
        type = "Rectangle";
        return "Эта фигура типа: " + type;

    }

    // вычисляем площадь
    double get_square()
    {
        double PI = acos(-1.);
        return 4 * pow(radius, 2) * PI;
    }

    // вычислЯем объем
    int get_volume()
    {
        double PI = acos(-1.);
        return 4 / 3 * pow(radius, 3) * PI;
    }
};


int main()
{
    //добавляем русскую локаль
    setlocale(0, "");
    int sideA = 3;
    int sideB = 4;
    int sideC = 5;


    // создаем фигуры	
    Square shape1("Квадрат", sideA);
    Circle shape2("Окружность", sideB);
    Rectangle shape3("ПрЯмоугольник", sideA, sideB);
    Triangle shape4("Треугольник", sideA, sideB, sideC);
    Cube shape5("Шар", sideA);
    Ball shape6("Куб", sideB);



    //операции
    cout << shape1.get_type() << ". " << shape1.get_name() << ". " << endl;
    int P1 = shape1.get_perimeter();
    cout << "периметр равен " << P1 << endl;
    int S1 = shape1.get_square();
    cout << "площадь равна " << S1 << endl;

    //еще один вариант получения типа = имя_класса
    string type;
    type = typeid(shape1).name(); // << std::endl;
    type.erase(0, 6);
    cout << "Эта второй способ вывести тип фигуры: " << type << ". " << endl;

    cout << shape2.get_type() << ". " << shape1.get_name() << ". " << endl;
    double P2 = shape2.get_perimeter();
    cout << "периметр равен " << P2 << endl;
    double S2 = shape2.get_square();
    cout << "площадь равна " << S2 << endl;

    cout << shape3.get_type() << ". " << shape1.get_name() << ". " << endl;
    int P3 = shape3.get_perimeter();
    cout << "периметр равен " << P1 << endl;
    int S3 = shape3.get_square();
    cout << "площадь равна " << S1 << endl;

    cout << shape4.get_type() << ". " << shape1.get_name() << ". " << endl;
    double P4 = shape4.get_perimeter();
    cout << "периметр равен " << P2 << endl;
    double S4 = shape4.get_square();
    cout << "площадь равна " << S2 << endl;

    cout << shape5.get_type() << ". " << shape1.get_name() << ". " << endl;
    int P5 = shape5.get_perimeter();
    cout << "периметр равен " << P1 << endl;
    int S5 = shape5.get_square();
    cout << "площадь равна " << S1 << endl;
    int V5 = shape5.get_volume();
    cout << "Объем равен " << S1 << endl;

    cout << shape6.get_type() << ". " << shape1.get_name() << ". " << endl;
    double S6 = shape6.get_square();
    cout << "площадь равна " << S2 << endl;
    int V6 = shape5.get_volume();
    cout << "Объем равен " << S1 << endl;


    cout << "Введите число фигур в выборке" << endl;
}