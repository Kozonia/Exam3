#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
class Circle : public Shape
{
public:
	Circle();
	Circle(Shape* inner);
	virtual string describe();
};
#endif