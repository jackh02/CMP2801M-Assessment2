#pragma once

#include "Shape.h"
#include "Movable.h"

class Circle : public Shape, public Movable
{
	public:
		Circle(int x, int y, int r);
		double radius;
};