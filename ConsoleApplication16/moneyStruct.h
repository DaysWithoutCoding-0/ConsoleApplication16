#pragma once
#include "dateStruct.h"
#include <iomanip>
#include <string>
#include <fstream>



class MoneyStruct
{
	string name1;
	string name2;
	float kurs;
	DateStruct date;

public:
	void createMoneyFromFile(istream& file);
	void printMoney(ostream& out);
};

