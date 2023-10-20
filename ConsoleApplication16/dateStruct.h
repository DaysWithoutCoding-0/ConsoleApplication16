#pragma once
#include <iomanip>
#include <fstream>
using namespace std;
class DateStruct 
{
	int day;
	int month;
	int year;

public:
	void createDateFromFile(istream& file);
	void printDate(ostream& out);
};
