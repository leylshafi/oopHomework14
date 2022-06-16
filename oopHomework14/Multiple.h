#pragma once

//Multiple
class Area
{
public:
    double area(double a, double b)
    {
        return a * b;
    }
};

class Perimeter
{
public:
    double perimeter(double a, double b)
    {
        return 2 * (a + b);
    }
};

class Rectangle :public Area, public Perimeter
{
public:
    double heigth = 0;
    double width = 0;

    Rectangle(double heigth, double width) : heigth(heigth), width(width) {
        this->heigth = heigth;
        this->width = width;
    }

    void print()
    {
        cout << "Heigth: " << heigth << endl;
        cout << "Width: " << width << endl;
    }

    double getArea()
    {
        return Area::area(heigth, width);
    }

    float Perimeter()
    {
        return Perimeter::perimeter(heigth, width);
    }
};