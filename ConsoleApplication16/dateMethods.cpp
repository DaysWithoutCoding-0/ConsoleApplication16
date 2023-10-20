#include "dateStruct.h"

#include <iomanip>
#include <fstream>



void DateStruct::createDateFromFile(istream& file)
{
	file >> day;
	file.get();
	file >> month;
	file.get();
	file >> year;
}

void DateStruct::printDate(ostream& out)
{
	out << day << "." << month << "." << year;
}