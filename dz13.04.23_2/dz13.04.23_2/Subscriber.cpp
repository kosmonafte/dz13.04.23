#include "Subscriber.h"

Subscriber::~Subscriber()
{
}

void Subscriber::getInfoFull()
{
	std::cout << this->name << std::endl << this->info << std::endl
		<< this->telNum << std::endl << this->homeNum << std::endl
		<< this->mobNum << std::endl;
}

void Subscriber::setName(char* name)
{
	delete[]this->name;
	this->name = name;
}

void Subscriber::setInfo(char* info)
{
	delete[]this->info;
	this->name = info;
}

void Subscriber::setTelNum(char* telNum)
{
	strcpy_s(this->telNum, 13, telNum);
}

void Subscriber::setHomeNum(char* homeNum)
{
	strcpy_s(this->homeNum, 13, homeNum);
}

void Subscriber::setMobNum(char* mobNum)
{
	strcpy_s(this->mobNum, 13, mobNum);
}

char* Subscriber::getName()
{
	return this->name;
}

char* Subscriber::getInfo()
{
	return this->info;
}

char* Subscriber::getTelNum()
{
	return this->telNum;
}

char* Subscriber::getHomeNum()
{
	return this->homeNum;
}

char* Subscriber::getMobNum()
{
	return this->mobNum;
}
