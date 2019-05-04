#include <iostream>
#include <conio.h>
using namespace std; 

int main()
{
	int Number;
	
	cout << "\n\n\t\t\t      * MULTIPLICATION TABLE *\n\n\n";
	cout << "\t\t\t\t\t";
	cin >> Number;
	cout << "\n";
	
	for (int k=1 ; k<=10 ; k++)
	{
		cout << "\t\t\t\t    ";
		cout << Number << " x " << k << " = " << Number*k << endl;
	}
	
     cout <<"\n\n\n\n\n\n\t\t\t\t        > <\n\t\t\t\t        ___";
	 cout <<"\n\n\t\t         ---------------KEN--------------\n\n";
    
    
	_getch();
	return 0;
}
