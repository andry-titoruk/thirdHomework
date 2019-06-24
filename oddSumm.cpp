#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const* argv[])
{
	long long number;

	std::cout << std::numeric_limits<int>::max() << std::endl;
	cout << "Enter an unsigned number: ";
	cin >> number;

	// 0  4294967295

	// std::cout << std::numeric_limits<int>::max() << std::endl;

	//check number
	while (number < std::numeric_limits<int>::min() || number >  std::numeric_limits<int>::max())
	{
		cout << "'number' is not unsigned.\nReset 'number'." << endl;
		cout << "Enter number :\n//'number' has to be > std::numeric_limits<int>::min() and < std::numeric_limits<int>::max()";
		cin >> number;
	}

	printf("Summ of the number %d ====>", number);

	long long summ = 0;

	while (number != 0)
	{
		if ((number % 10) % 2 == 1)
		{
			summ += number % 10;
		}
		number /= 10;
	}
	printf("%lld\n", summ);

	return 0;
}