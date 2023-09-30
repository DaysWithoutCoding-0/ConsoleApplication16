#pragma once
#include "dateStruct.h"
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

class MoneyStruct
{
	string name1;
	string name2;
	float kurs;
	DateStruct date;

public:
	void create_money_from_file(istream& file);
	void print_money(ostream& out);
};

