#pragma once

#include "Point.h"

#include <vector>

class Shape
{
	public:
		Shape();
		double area;
		bool isCircular;
		Point* leftTop;
		double perimeter;
		vector<Point*> points;

		double calculateArea(vector<Point*>points);
		double calculatePerimeter(vector<Point*>points);
		double calculatePoints(vector<Point*>points);

		void toString();
};