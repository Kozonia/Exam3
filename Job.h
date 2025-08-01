#ifndef JOB_H
#define JOB_H
#include <iostream>
using namespace std;
class Job
{
protected:
	string name;
public:
	Job();
	Job(string name);
	virtual void attack() =0;
	void setName(string name);
	string getName();
};
#endif