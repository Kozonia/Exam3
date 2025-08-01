#include "Job.h"

Job::Job()
{
	name = "";
}

Job::Job(string name)
{
	this->name = name;
}

void Job::setName(string name)
{
	this->name = name;
}

string Job::getName()
{
	return name;
}