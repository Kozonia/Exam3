#include "Circle.h"


Circle::Circle()
{
	name = "Circle";
	innerShape = nullptr;
}

Circle::Circle(Shape* inner)
{
	name = "Circle";
	innerShape = inner;
}

string Circle::describe()
{
	return "a perfect circle surrounding " + innerShape->describe();

}