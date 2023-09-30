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
	void create_date_from_file(istream& file);
	void print_date(ostream& out);
};
