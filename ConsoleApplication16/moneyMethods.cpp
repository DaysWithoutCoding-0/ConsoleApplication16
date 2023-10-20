#include "moneyStruct.h"

#include <iomanip>

using namespace std;

void MoneyStruct::createMoneyFromFile(istream& file)
{
	date.createDateFromFile(file);

	file >> name1;
	file >> name2;
	file >> kurs;
}

void MoneyStruct::printMoney(ostream& out)
{
	date.printDate(out);
	out <<" "<< name1 << " " << name2 << " " << kurs << " ";
	out << endl;
}