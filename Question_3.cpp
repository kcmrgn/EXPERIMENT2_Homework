#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main ()
{
	int x;
	
	float V, y, z;
	
	z = 2.5;
	
	cout<<"\n\n\t\t\t          * VALUE OF V * \n\n\n"<<endl;
	
	cout << "\n\n\t\t\t    What is the value of x: ";
	cin >> x;
	cout << "\n\n\t\t\t    What is the value of y: ";
	cin >> y;
	cout << "\n\n\t\t\t    The value of z is 2.5" << endl;
	
	switch (x)
	{
		case 1: 
		if ((x=1) && (1<y<5)) 
			V= x*y*z;

		if 
		((x=1) && (y>=5))
			V= (x+(y/z));
		break;
		
		case 2: 
		if ((x=2) && (y<=5))
			V= abs((x-y)/z);
		
		else if
			((x=2) && (y>5))
			V = x-(sqrt(y+z));
			break;
				
			default: V = x+y+z;
			break;
			
}
		
		cout << "\n\n\n\t\t                  "; 
		cout << fixed << setprecision (2);
		cout << setw(10) << V;
		
		 cout <<"\n\n\n\n\n\n\t\t\t\t        > <\n\t\t\t\t        ___";
	     cout <<"\n\n\t\t         ---------------KEN--------------\n\n";
		
	_getch ();
	return 0;
}

