#include "money_Struct.h"

#include <iomanip>

using namespace std;

void MoneyStruct::create_money_from_file(istream& file)
{
	date.create_date_from_file(file);

	file >> name1;
	file >> name2;
	file >> kurs;
}

void MoneyStruct::print_money(ostream& out)
{
	date.print_date(out);
	out <<" "<< name1 << " " << name2 << " " << kurs << " ";
	out << endl;
}