#include "Job.h"
#include "Mage.h"
#include "Warrior.h"
#include "Hero.h"

void testHero();


int main()
{
	testHero();



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