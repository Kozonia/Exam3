#ifndef MAGE_H
#define MAGE_H
#include "Job.h"
#include <vector>
class Mage : public Job
{
private:
	vector<string> spellbook;
public:
	Mage(); //initialize name to mage
	void castSpell(string spell);
	string pickSpell();
	virtual void attack();

};
#endif

