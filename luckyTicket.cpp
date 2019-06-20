#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const* argv[])
{
	//summs of parts of the number
	short summ1 = 0;
	short summ2 = 0;

	unsigned number;
	cout << "Enter the number which consist if 6 numerals: " << endl;
	cin >> number;

	for (int i = 1; i < 7; i++)
	{
		if (i < 4)
		{
			summ1 += number % 10;
		}
		if (i > 3)
		{
			summ2 += number % 10;
		}
		number /= 10;
	}

	if (summ1 == summ2)
	{
		cout << "WINNER, WINNER, CHICKEN DINNER!!!" << endl;
	}
	else
	{
		cout << "It's not your day... U'd better try tomorrow..." << endl;
	}
	return 0;
}