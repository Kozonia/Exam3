#include "Mage.h"

Mage::Mage()
{
	name = "Mage";
	spellbook = { "Shatter", "Fireball", "Cone of Cold", "Lightning Bolt", "Conjure Minor Elementals" };
	srand(time(0));
}

void Mage::castSpell(string spell)
{
	cout << " casts " << spell << "." << endl;;
}

string Mage::pickSpell()
{
	return spellbook[rand() % 5];
}

void Mage::attack()
{
	cout << "The " << name;
	castSpell(pickSpell());
}