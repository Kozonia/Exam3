#ifndef WARRIOR_H
#define WARRIOR_H
#include "Job.h"
class Warrior : public Job
{
private:
	string weapon;
public:
	Warrior();
	Warrior(string weaponName);
	virtual void attack();
};
#endif