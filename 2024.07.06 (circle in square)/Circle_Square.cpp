#include "Circle_Square.h"
#include "Square.h"
#include "Circle.h"
#include <iostream>
using namespace std;

Circle_Square::Circle_Square(int a, int r):Square(a), Circle(r) {}

void Circle_Square::compare(int a, int r)
{
	int d = r * 2;
	if (d <= a)
	{
		cout << "\nCircle in square is possible";
	}
	else
	{
		cout << "\nCircle in square is not possible";
	}
}

void Circle_Square::show(int a, int b)
{
	cout << a << "\t" << b;
}
