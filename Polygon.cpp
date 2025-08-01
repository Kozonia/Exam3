#include "Polygon.h"

Polygon::Polygon()
{
	name = "polygon";
	numSides = 0;
	innerShape = nullptr;
}

Polygon::Polygon(string name, int numSides, Shape* inner)
{
	this->name = name;
	this->numSides = numSides;
	innerShape = inner;
}

string Polygon::describe()
{
	return "a " + to_string(numSides) + "-sided " + name + " surrounding " + innerShape->describe();
}