#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	
 cout<<"\n\n\t\t\t    * WELCOME TO KEN TELECOM * \n"<<endl;

 char Package;
 int PackageA, PackageB, PackageC, HoursUsed, TotalAmountDue;
 PackageA = 995;
 PackageB = 1495;
 PackageC = 1995;

 cout<<"\t       ( Choose between Package A, Packaga B or Package C )"<<endl;

 cout<<"\n\n\n\n\t\t     Please enter your Subscription Package \n\n\t\t\t\t       "; 
 cin>>Package;
 cout<<"\n\n\t\t      Please enter the number of hours used \n\n\t\t\t\t       ";
 cin>>HoursUsed;

switch (Package)
 {
 	case 'A':
 	cout << "\n\t\t\t   * That is a good choice!* "<<endl;
 	cout << " " << endl;
 		if (HoursUsed > 0 && HoursUsed <= 10)
 		cout << "\n\n\n\t\t\t       Total Monthly Due \n\n\t\t\t\t   Php " << PackageA << "\n\n\n\n\n\n\n";
 		else if (HoursUsed > 10)
 		cout << "\n\n\n\t\t\t       Total Monthly Due \n\n\t\t\t\t   Php " << (((HoursUsed - 10) * 20) + 995) << "\n\n\n\n\n\n\n";
 		break;	
 		
 	case 'B':
 	cout << "\n\t\t\t  * WHAT AN EXCELLENT CHOICE! *"<<endl;
 	cout << " " <<endl;
 	    if (HoursUsed > 0 && HoursUsed <= 20)
 	    cout << "\n\n\n\t\t\t       Total Monthly Due \n\n\t\t\t\t   Php " << PackageB << "\n\n\n\n\n\n\n";
 	    else if (HoursUsed > 20)
 	    cout << "\n\n\n\t\t\t       Total Monthly Due \n\n\t\t\t\t   Php " << (((HoursUsed - 20) * 10 ) + 1495) << "\n\n\n\n\n\n\n";
 		break;
 		
 	case 'C':
 	cout << "\n\t     * THAT IS THE BEST SUBSCRIPTION DEAL IN KEN TELECOM! *"<<endl;
 	cout << " " << endl;
 	    if (HoursUsed > 0 && HoursUsed > 20)
 	    cout << "\n\n\n\t\t\t       Total Monthly Due \n\n\t\t\t\t   Php " << PackageC << "\n\n\n\n\n\n\n";
 		break;
 		
 	cout << " " <<endl;	
 	
 	default:
 		cout << "\n  * Please choose again among the choices: Package A, Package B or Package C! *\n\n\n\n\n\n\n"<<endl; 	
 }

cout<< "We really value your patronage and trust towards Ken Telecom"<<endl;
cout<< "Visit our website kentelecom.com for a chance to win" <<endl; 
cout<< "VIP Tickets to *THE 1975 CONCERT in MANILA* \n" <<endl;

cout<< "Facebook: Ken Telecom " << endl; 
cout<< "Twitter: @kentelecomofficial " << endl; 
cout<< "Instagram: @kentelecomofficial" << endl;

	 cout <<"\n\n\n\n\n\t\t\t\t      > <\n\t\t\t\t      ___";
	 cout <<"\n\n\t\t       ---------------KEN--------------\n\n";

    _getch();
	return 0;
}




