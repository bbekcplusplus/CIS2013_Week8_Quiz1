#include <iostream>

using namespace std;

int main()
{
	double changeAmount;
	
	
	int quarters;
	int dimes;
	int nickels;
	int pennies;
	cout << "Enter change amount --> ";
	cin >> changeAmount;
	cout << "The change amount is $" << changeAmount << " ." << endl;
	cout << endl;

	if (changeAmount < 0)
	{
		cout << "Invalid amount." << endl;
	}
	else
	{

		changeAmount = changeAmount * 100;
		changeAmount = int(changeAmount);

		quarters = changeAmount / 25;
		changeAmount -= quarters * 25;

		dimes = changeAmount / 10;
		changeAmount -= dimes * 10;

		nickels = changeAmount / 5;
		changeAmount -= nickels * 5;

		pennies = changeAmount / 1;
		changeAmount -= pennies * 1;

		cout << "Your change is given as :" << endl;
		cout << "    quarter (s)   : " << quarters << endl;
		cout << "    dime (s)      : " << dimes << endl;
		cout << "    nickel (s)    : " << nickels << endl;
		cout << "    penny (ies)   : " << pennies << endl;
	}
	return 0;
}
