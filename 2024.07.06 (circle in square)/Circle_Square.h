#pragma once
#include "Square.h"
#include "Circle.h"

class Circle_Square: public Square, public Circle
{
public:
	Circle_Square(int, int);
	void show(int a, int r);
	void compare(const int a, const int r);
};

