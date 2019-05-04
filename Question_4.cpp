#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

int x, y, z;
x = 12;
y = 36;
z = 24;

cout << "\n\n\t\t            * LARGEST NUMBER *";


cout << "\n\n\n\n\n\t\t        Enter the first number: ";
cin >> x;
cout << "\n\n\t\t        Enter the second number: ";
cin >> y;
cout << "\n\n\t\t        Enter the third number: ";
cin >> z;


if (x>y && x>z)
{
	cout << "\n\n\n\t\t         The largest number is " << x;
}	
else if (y>x && y>z)
{
	cout << "\n\n\n\t\t         The largest number is " << y;
}
else if (z>x && z>y)
{
	cout << "\n\n\n\t\t         The largest number is " << z << endl;
}

	cout <<"\n\n\n\n\n\n\t\t\t\t    > <\n\t\t\t\t    ___";
	cout <<"\n\n\t\t     ---------------KEN--------------\n\n";



	_getch();
	return 0;
}
