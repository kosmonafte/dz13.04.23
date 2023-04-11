#include "telBook.h"

void TelBook::getAccaunts()
{
	for (Subscriber* sub = telArray; sub < telArray + this->count; sub++) {
		std::cout << "id: " << sub - telArray << std::endl;
		sub->getInfoFull();
		std::cout << std::endl << std::endl;
	}
}

int TelBook::getCount()
{
	return this->count;
}

void TelBook::addAccount(char* telNum,char* homeNum,char* mobNum,
	char* name,char* info)
{
	Subscriber sub(telNum, homeNum, mobNum, name, info);
	this->telArray[this->count] = sub;
	this->count++;
}

Subscriber TelBook::getTelArray()
{
	return *this->telArray;
}

Subscriber TelBook::getAccaunt(int id)
{
	return this->telArray[id];
}
