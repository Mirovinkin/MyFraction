// MyFraction.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <typeinfo>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
//#include <cstdlib>
#include <ctype.h>
#include <fstream>

using namespace std;

class Fraction
{
private:
    int _top;
    int _bottom;

public:
    Fraction() {};
    Fraction(const int& Top, const int& Bottom):
	_top(Top),
	_bottom(Bottom) {};

    int GetTop()
    {
        return _top;
    }

    int GetBottom()
    {
        return _bottom;
    }

    void SetTop(const int& Top)
    {
        _top = Top;
    }
    void SetBottom(const int& Bottom)
    {
        _bottom = Bottom;
    }

    int operator +(Fraction Fract2)
    {
        return (_top * Fract2.GetBottom() + Fract2.GetTop() * _bottom) / (_bottom * Fract2.GetBottom());

    }

    int operator -(Fraction Fract2)
    {
        return (_top * Fract2.GetBottom() - Fract2.GetTop() * _bottom) / (_bottom * Fract2.GetBottom());

    }

    int operator *(Fraction Fract2)
    {
        return _top * Fract2.GetTop() / _bottom * Fract2.GetBottom();
    }

    int operator /(Fraction Fract2)
    {
        return _top * Fract2.GetBottom() / _bottom * Fract2.GetTop();
    }
};


int main()
{
    std::cout << "Hello World!\n";
}
