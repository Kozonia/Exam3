#include "Job.h"
#include "Mage.h"
#include "Warrior.h"
#include "Hero.h"
#include "Shape.h"
#include "Circle.h"
#include "Polygon.h"

void testHero();
void testShape();


int main()
{
	testHero();
	testShape();



	return 0;
}

void testHero()
{
	Job* mageJob = new Mage();
	Job* warriorJob = new Warrior();
	Hero Hero1("Jim", mageJob);
	Hero Hero2("Mark", warriorJob);

	Hero1.act();
	Hero2.act();
}

void testShape()
{
	Shape Shape1; //dot surrounded by 2 circles and a square
	Shape* CircleShape2 = new Circle(&Shape1);
	Shape* CircleShape = new Circle(CircleShape2);
	Shape* SquareShape = new Polygon("square", 4, CircleShape);

	cout << SquareShape->describe() << endl;
	
	Shape Shape2; //dot surrounded by a circle, triangle, square, and pentagon
	Shape* CircleShape3 = new Circle(&Shape2);
	Shape* TriangleShape = new Polygon("triangle", 3, CircleShape3);
	Shape* SquareShape2 = new Polygon("square", 4, TriangleShape);
	Shape* PentagonShape = new Polygon("pentagon", 5, SquareShape2);

	cout << PentagonShape->describe() << endl;

}