#include <iostream>
using namespace std;

int main()
{
	int enteredNum;
	//the remainder of %-division
	int a;
	//the quantity of '1' in the string
	int i = 0;

	cout << "Enter the number:" << endl;
	cin >> enteredNum;

	while (enteredNum > 0 && enteredNum < 4294967296)
	{
		a = enteredNum % 2;

		if (a == 0)
		{
			cout << '0';
			enteredNum = enteredNum / 2;
		}
		else if (a == 1)
		{
			cout << '1';
			enteredNum = enteredNum / 2;
			i++;
		}
	}
	cout << "\nThe quantity of '1' in the string is: "; cout <<i;
	return 0;
}