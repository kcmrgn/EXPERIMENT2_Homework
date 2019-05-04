#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
    
   
    cout << "\n\n\t\t           * COUNTING THE NUMBERS *\n\n\t\t          ( Counting starts now... ) \n\n\n\n     ";
    
    for ( int k = 1; k <= 10; k++ )
    {
    	cout << k << ", ";
    
        if (k >= 10)
	    {
	     	for (k=12; k <=30; k+=2)
	     	cout << k << ", ";
	    }	
    	
    }
      
	cout <<"\n\n\n\n\n\n\t\t\t\t      > <\n\t\t\t\t      ___";
	cout <<"\n\n\t\t       ---------------KEN--------------\n\n";

    _getch();
    return 0;
}
