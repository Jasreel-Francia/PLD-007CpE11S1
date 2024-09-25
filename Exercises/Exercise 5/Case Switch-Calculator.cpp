#include <iostream>
using namespace std;
int main()

{

//Exercise 5!!!
//create a c++ program that applies MDAS Calculator

int num1=0,num2=0,sum=0,sub=0,multi=0;
float div=0,remain=0;
char o;

//Input
cout<<"Input first item: ";
cin>>num1;
cout<<"Input Operation(+,-,*,/,%): ";
cin>>o;
cout<<"Input next item: ";
cin>>num2;

//Operation/Solution
sum=(num1+num2);
sub=(num1-num2);
multi=(num1*num2);
div=(num1/num2);
remain=(num1%num2);

switch(o)
{
	//Symbols
	case '+':
		cout<<"Answer: "<<sum;
		break;
	case '-':
		cout<<"Answer: "<<sub;
		break;
	case '*':
		cout<<"Answer: "<<multi;
		break;
	case '/':
		cout<<"Answer: "<<div;
		break;
	case '%':
		cout<<"Answer: "<<remain;
		break;
		
		
		default:
			{
				cout<<"invalid";
				break;		
			}
}
return 0;
}





