#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	cout << "\n\n \t\t\t WELCOME TO KC AQUA WATER\n\t\               Please feel free to inquire! \n\n\n\n\n";
	
	float UnpaidBalance, Gallons, CustomerWaterBill;
	
	cout<<"\t\t      How many gallons were consumed \n\n\t\t\t             ";
	cin>>Gallons;
	
	cout<<"\n\n\t\t      How much is the unpaid balance \n\n\t\t\t          Php ";
	cin>>UnpaidBalance;
	
	CustomerWaterBill = (35 + (1.10 * Gallons));
	
	if (UnpaidBalance > 0)
	{
	    cout<<"\n\n\t                    Total Amount bill \n\n\t                         Php "<<(CustomerWaterBill +20);	
	}
	else
	{
		cout<<"\n\n\t                    Total Amount bill \n\n\t                         Php " <<CustomerWaterBill << endl;
	}
	
cout<< "\n\n\n\n\n\nThank you for being one of our valued customers \nHave a nice Day!";
cout<<"\n\nFacebook: KC Aqua Water\nTwitter: @kcaquawaterofficial\nInstagram: @kcaquawaterofficial \n\n";

	cout <<"\n\n\n\n\n\t\t\t\t    > <\n\t\t\t\t    ___";
	cout <<"\n\n\t\t     ---------------KEN--------------\n\n";

	_getch();
	return 0;
}

