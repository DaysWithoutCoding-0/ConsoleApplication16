#include"print.h"

#include <iomanip>
#include <vector>
#include<iostream>

using namespace std;

void print_vector(std::vector<MoneyStruct>& money)
{
	for (rsize_t i = 0; i < money.size(); i++)
	{
		money[i].print_money(cout);
	}
}