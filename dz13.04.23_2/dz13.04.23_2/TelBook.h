#pragma once
#include "Subscriber.h"
class TelBook
{
private:
	const int size = 20;
	int count = 0;
	Subscriber* telArray = new Subscriber[size];
public:
	/*TelBook() {
		Subscriber sub;
		Subscriber sub2("+79106014360", "+79106014360", "+79106014360", "Александр", "Ученик академии");
		telArray[0] = sub;
		telArray[1] = sub2;
	}*/
	void getAccaunts();
	void addAccount(char* telNum,char* homeNum,char* mobNum,
		char* name,char* info);
	Subscriber getTelArray();
	Subscriber getAccaunt(int id);
	int getCount();
	
};

