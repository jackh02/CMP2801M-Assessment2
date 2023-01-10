#pragma once

#include "Shape.h"
#include "Movable.h"

class Rectangle : public Shape, public Movable
{
	public:
		Rectangle(int x, int y, int h, int w);
		double height;
		double width;
};