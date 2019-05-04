#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	
	int NumberofColumns, NumberofRows;
	
	cout << "\n\n\t\t\t      * COLUMNS and ROWS *\n\n\n";
	cout << "\n\n\t\t\t\tNumber of Columns  \n\n\t\t\t\t       ";
	cin >> NumberofColumns;
	cout << "\n\n\t\t\t\t Number of Rows  \n\n\t\t\t\t       ";
	cin >> NumberofRows;
	
	for (int k=1; k <= NumberofColumns; k++)
	{
		cout << "\n\n\n\t\t\t\t    ";
		for (int k=1; k <= NumberofRows; k++)
		{
			cout << "*";
		}
	}

	 cout <<"\n\n\n\n\n\n\t\t\t\t       > <\n\t\t\t\t       ___";
	 cout <<"\n\n\t\t        ---------------KEN--------------\n\n";

	
	_getch();
	return 0;
}
