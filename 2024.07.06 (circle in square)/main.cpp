#include "Circle_Square.h"
#include "Square.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main()
{
	//Square S(10);
	//Circle C(5);
	
	Circle_Square obj(10, 11);
	obj.show(10, 11);
	obj.compare(10, 11);

}