#include"print.h"

#include <iomanip>
#include <vector>
#include<iostream>


void printVector(std::vector<MoneyStruct>& money)
{
	for (rsize_t i = 0; i < money.size(); i++)
	{
		money[i].printMoney(cout);
	}
}