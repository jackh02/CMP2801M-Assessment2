#pragma once

#include "Point.h"

#include "vector"

class Shape
{
	public:
		Shape();
		double area;
		bool isCircular;
		Point* leftTop;
		double perimeter;
		vector <Point*> points;
};