#pragma once
#include <string>
class Eat
{

};

class Work
{
public:
	Work();
	virtual ~Work();

protected:
	std::string occupation;
	int salary;

};

class Morning
{

};
class Noon
{
public:
	Noon(){}
	~Noon(){}

};
class Evening
{

};
class Sleep
{
public:
	Sleep(){}
	virtual ~Sleep(){}

};

class Person
{
public:
	Person();
	virtual ~Person();


private:
};



