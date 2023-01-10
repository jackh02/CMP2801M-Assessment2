#pragma once

#include "Shape.h"
#include "Movable.h"

class Square : public Shape, public Movable
{
	public:
		Square(int x, int y, int e);
		double edge;
		double calculateArea(double edge);
};