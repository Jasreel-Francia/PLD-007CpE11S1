#include <iostream>
using namespace std;
int main ()

{
	//local variable
	
	int x=0,y=0,sum, dif, prod, remainder;
	float quotient;
	
	cout<<"Give two integers."<<endl;
	cout<<"Enter value of x: ";
	cin>>x;
	cout<<"Enter value of y: ";
	cin>>y;

	
	//calculation of sum
	sum=(x+y);
	
	//calculation of dif
	dif=(x-y);
	
	//calculation of prod
	prod=(x*y);
	
	//calculation of quotient
	quotient=(x/y);
	
	//calculation of remainder
	remainder=(x%y);
	
	//print
	cout<<""<<endl;
	cout<<"Algorithm to get the Sum, Difference, Product, Quotient, and Remainder of Two Integers."<<endl<<endl;
	
	cout<<"The result of the sum is "<<sum<<endl;
	cout<<"The result of the difference is "<<dif<<endl;
	cout<<"The result of the product is "<<prod<<endl;
	cout<<"The result of the quotient is "<<quotient<<endl;
	cout<<"The result of the remainder is "<<remainder<<endl;
	
	return 0;
	
}
