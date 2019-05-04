#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout << "\n\n\t\t             * FIBONACCI NUMBERS *\n\n\t\t           ( Counting starts now... ) \n\n\n\n       ";
	
	int firstNumber = 0;
	int secondNumber = 1;
	
		for (int k = 1; k <= 20; ++k)
		{
				cout << firstNumber << ",";
				int sum = firstNumber + secondNumber;
				firstNumber = secondNumber;
				secondNumber = sum;
		}
		
	cout <<"\n\n\n\n\n\n\t\t\t\t      > <\n\t\t\t\t      ___";
	cout <<"\n\n\t\t       ---------------KEN--------------\n\n";
	
    _getch();		
	return 0;	
}
