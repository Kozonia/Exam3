#ifndef POLYGON_H
#define POLYGON_H
#include "Shape.h"
#include <string>
class Polygon : public Shape
{
private:
	int numSides;
public:
	Polygon();
	Polygon(string name = "polygon", int numSides = 0, Shape* inner = nullptr);
	virtual string describe();
};
#endif