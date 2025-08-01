#ifndef HERO_H
#define HERO_H
#include <iostream>
#include "Job.h"
using namespace std;
class Hero
{
private:
	string name;
	Job* HeroJob;
public:
	Hero();
	Hero(string name, Job* job);
	void setName(string name);
	string getName();
	void setJob(Job* job);
	Job* getJob();
	void act();
};
#endif