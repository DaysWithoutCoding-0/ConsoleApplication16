#include "dateStruct.h"

#include <iomanip>
#include <fstream>

using namespace std;

void DateStruct::create_date_from_file(istream& file)
{
	file >> day;
	file.get();
	file >> month;
	file.get();
	file >> year;
}

void DateStruct::print_date(ostream& out)
{
	out << day << "." << month << "." << year;
}