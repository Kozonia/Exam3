#include "Shape.h"

Shape::Shape()
{
	name = "Dot";
	innerShape = nullptr;
}

string Shape::describe()
{
	return "a dot";
}

void Shape::setName(string name)
{
	this->name = name;
}

string Shape::getName()
{
	return name;
}

void Shape::setInnerShape(Shape* inner)
{
	innerShape = inner;
}

Shape* Shape::getInnerShape()
{
	return innerShape;
}