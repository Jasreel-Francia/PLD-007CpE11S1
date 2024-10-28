#include <iostream>
#include <string>
using namespace std;
int main ()
{
	int numd, size = 7; 
	string day[size] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	
	while (true)
	{
		cout<< "Enter a number: ";
		cin>>numd;
		
		if (numd < 7 && numd >= 0)
		{
			cout << "Your chosen day is: " << day[numd]<<endl;
			cout << endl;
		}
		else
		{
			cout << "Invalid, there is no such day."<<endl;
			break;
		}
	}
	return 0;
}
