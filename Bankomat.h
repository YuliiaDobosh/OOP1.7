#pragma once
#include<string>
#include "Money.h"
using namespace std;

class Bankomat
{
private:
	int ID_number;
	Money currentMoney;//поточна сума
	double max, min;

public: 
	void setId(int i) { ID_number = i; }
	int  getId() { return ID_number; }
	void setmax(int i) { max = i; };
	void setmin(int i) { min = i; };
	double getmax() { return max; };
	double getmin() { return min; };
	void setcurrentMoney(Money i) { currentMoney = i; }
	Money getcurrentMoney() { return currentMoney; }
	void insertMoney(Money i); //завантажити купюри
	void getMoney(Money i);//зняти купюри
	string toString() const;
	void Display() const;
	void Read();
	bool Init(int ID_number , Money currentMoney, double max=2000, double min=100);

};

