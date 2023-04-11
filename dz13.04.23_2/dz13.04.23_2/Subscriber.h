#pragma once
#include <iostream>

class Subscriber
{
private:
	char telNum[13];
	char homeNum[13];
	char mobNum[13];
	char* name;
	char* info;

protected:
public:
	Subscriber() {
		strcpy_s(this->telNum, 13, "+79991112233");
		strcpy_s(this->homeNum, 13, "+79991112233");
		strcpy_s(this->mobNum, 13, "+79991112233");
		this->name = new char[30];
		strcpy_s(this->name, 30, "Петров Петр Петрович");
		this->info = new char[100];
		strcpy_s(this->info, 100, "Просто хороший человек");
	}
	Subscriber(const char* telNum, const char* homeNum, const char* mobNum, const char* name, const char* info) {
		strcpy_s(this->telNum, 13, telNum);
		strcpy_s(this->homeNum, 13, homeNum);
		strcpy_s(this->mobNum, 13, mobNum);
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
		this->info = new char[strlen(info) + 1];
		strcpy_s(this->info, strlen(info) + 1, info);
	}
	~Subscriber();
	void getInfoFull();
	void setName(char* name);
	void setInfo(char* info);
	void setTelNum(char* telNum);
	void setHomeNum(char* homeNum);
	void setMobNum(char* mobNum);
	char* getName();
	char* getInfo();
	char* getTelNum();
	char* getHomeNum();
	char* getMobNum();
};

