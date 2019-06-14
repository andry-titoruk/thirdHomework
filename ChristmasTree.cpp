#include <iostream>
using namespace std;

int main()
{
	//number of a string
	int i = 0;
	int a = 0;
	int enteredNum;

	cout << "Enter the number:";
	cin >> enteredNum;

	
	
    
	while (i < enteredNum - i)
	{
		int gap = 0;
		int gapsQuantity = ((enteredNum - 1) / 2) - i;

		while (gap < gapsQuantity)
		{
			cout << " ";
			gap++;
		}
		//number of stars have to be in the string
		
		while (a < i + 1)
		{
			cout << "*";
			a++;
		}
		cout << "\n";
		i++;
		a = a - 2 * i;
		/*gapsQuantity = gapsQuantity - i;*/
	}
	cout << "\n";
	return 0;
}