
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0)); //Seed the random number generator
	int randomValue = rand(); //generate a random number
	cout<<"Random value: "<<randomValue<<endl; 
	return 0;
}
