#include "m_data.h"
#include <vector>
#include "print.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "RU");
	ifstream file("txt.txt");

	if (file.is_open()) 
	{
		vector <MoneyStruct> money;
		m_data(file, money);
		print_vector(money);
	}
}

