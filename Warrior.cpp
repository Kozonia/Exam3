#include "Warrior.h"


Warrior::Warrior()
{
	name = "Warrior";
	weapon = "sword";
}

Warrior::Warrior(string weaponName)
{
	name = "Warrior";
	weapon = weaponName;
}

void Warrior::attack()
{
	cout << "The " << name << " swings their " << weapon << endl;
}