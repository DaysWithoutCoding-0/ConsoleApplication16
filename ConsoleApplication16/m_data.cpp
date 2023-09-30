#include "m_data.h"

#include <vector>

void m_data(ifstream& file, vector<MoneyStruct>& money)
{
	while (!file.eof())
	{
		MoneyStruct m_data;
		m_data.create_money_from_file(file);
		money.push_back(m_data);
	}
}