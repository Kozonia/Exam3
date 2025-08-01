#include "Hero.h"

Hero::Hero()
{
	name = "";
	HeroJob = nullptr;
}

Hero::Hero(string name, Job* job)
{
	this->name = name;
	HeroJob = job;
}

void Hero::setName(string name)
{
	this->name = name;
}

string Hero::getName()
{
	return name;
}

void Hero::setJob(Job* job)
{
	HeroJob = job;
}

Job* Hero::getJob()
{
	return HeroJob;
}

void Hero::act()
{
	cout << name << " ";
	HeroJob->attack();
	cout << endl;
}