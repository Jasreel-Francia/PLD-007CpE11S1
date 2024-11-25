//2.1 Create a program in C++ that will add, 
//subtract, divide, multiply for a 2 user-input integer values. 
//Use functions in the program.
#include <iostream>

using namespace std;

int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int multi(int a, int b)
{
	return a*b;
}
double div(int a, int b)
{
	return static_cast<double>(a)/b;
}

int main()
{
	int add(int a, int b),sub(int a, int b),multi(int a, int b);
	double div(int a, int b);
	int num1,num2;
	char solution;
	
	cout<<"Enter an integer: ";
	cin>>num1;
	
	cout<<endl<<"Types of Operations"<<endl<<"Add (+)"<<endl<<"Subtract (-)"<<endl<<"Divide (/)"<<endl<<"Multiply (*)"<<endl;
	cout<<"Enter the operation: ";
	cin>>solution;
	
	cout<<"Enter an integer: ";
	cin>>num2;
	
	switch (solution){
		case '+':
			cout<<"Sum of "<<num1<<" and "<<num2<<" is: "<<add(num1, num2)<<endl;
			break;
		case '-':
			cout<<"Difference of "<<num1<<" and "<<num2<<" is: "<<sub(num1, num2)<<endl;
			break;
		case '/':
			if (num2 !=0){
			cout<<"Quotient of "<<num1<<" and "<<num2<<" is: "<<div(num1, num2)<<endl;
			} else {
				cout<<cout<<"Invalid, division by 0";
			}
			break;
		case '*':
			cout<<"Product of "<<num1<<" and "<<num2<<" is: "<<multi(num1, num2)<<endl;
			break;
		default:
			cout<<"Invalid Operation.";
	}
	
	return 0;
}
