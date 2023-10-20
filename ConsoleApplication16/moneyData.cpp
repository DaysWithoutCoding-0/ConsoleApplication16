#include "moneyData.h"

#include <vector>

void moneyData(std::ifstream& file, std::vector<MoneyStruct>& money)
{
	while (!file.eof())
	{
		MoneyStruct m_data;
		m_data.createMoneyFromFile(file);
		money.push_back(m_data);
	}
}