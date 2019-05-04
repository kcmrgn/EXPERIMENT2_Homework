#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{

	int k, number, sum;	

	cout << "\n\n\t\t\t       * SUM OF NUMBERS * \n\n\n\n\n";
	
	cout << "\n\n\t\t\t       Enter a number: ";
	cin >> number;
 
 	while (number>0)
	{
		sum = 0;
		
	for (k=1; k<=number; k++)
	{
		sum+=k;
	}
		cout << "\n\n\t\t The sum of all whole numbers from 1 to " << number << " is " << sum << endl;
		cout << "\n\n\n\t\t\t       Enter a number: ";
		cin >> number;	
	}
	
	cout << "\n\n\n\n\n\n\t\t\t           Thank you!";
	cout <<"\n\n\n\t\t\t\t       > <\n\t\t\t\t       ___";
	cout <<"\n\n\t\t        ---------------KEN--------------\n\n\n\n";

	
	_getch();
	return 0;
}
