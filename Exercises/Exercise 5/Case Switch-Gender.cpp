#include <iostream>
using namespace std;
int main()

{

//Exercise 5!!!
//create a c++ program to determine if alphabet is vowel or consonant

char c;

cout<<"Enter the letter/alphabet: ";
cin>>c;


switch(c)
{
	//Gender
	case 'f':
		cout<<"Female";
		break;
	case 'F':
		cout<<"Female";
		break;
	
	case 'm':
		cout<<"Male";
		break;
	case 'M':
		cout<<"Male";
		break;
		
		default:
			{
				cout<<"invalid";
				break;		
			}
}
return 0;
}





