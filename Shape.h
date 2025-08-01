#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;
class Shape
{
protected:
	string name;
	Shape* innerShape;
public:
	Shape();
	virtual string describe();
	void setName(string name);
	string getName();
	void setInnerShape(Shape* inner);
	Shape* getInnerShape();
};
#endif