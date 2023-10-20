#include "moneyData.h"
#include <vector>
#include "print.h"

int main()
{
	setlocale(LC_ALL, "RU");
	ifstream file("txt.txt");

	if (file.is_open()) 
	{
		std::vector <MoneyStruct> money;
		moneyData(file, money);
		printVector(money);
	}
}

