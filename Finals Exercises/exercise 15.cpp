
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	time_t now = time(0); //Get current time
	cout<<"Current time: "<<ctime(&now)<<endl; 
	return 0;
}
