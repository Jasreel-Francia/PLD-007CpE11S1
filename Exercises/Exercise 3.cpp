#include <iostream>
using namespace std; 
int main ()

{
	//initialization of variables
	float grade=0;
	
	//Input variable values
	cout<<"Rating of your Grade."<<endl;
	cout<<"Input your grade: ";
	cin>>grade;
	
	
	//Condition: comparing/rating of grades
	 
	if ((grade >= 94) && (grade <= 100))
	{
		cout<<"Your Grade is 1.00. Rating-Excellence."<<endl;
	}
	
	else if ((grade >= 88.5)&&(grade <=93.99))
	{
		cout<<"Your Grade is 1.25. Rating-Superior."<<endl;
	}
	
	
	else if ((grade >= 83)&&(grade <=88.49))
	{
		cout<<"Your Grade is 1.50. Rating-Meritorious."<<endl;
	}
	
	else if ((grade >= 77.5)&&(grade <=82.99))
	{
		cout<<"Your Grade is 1.75. Rating-Very Good."<<endl;
	}
	
	else if ((grade >= 72)&&(grade <=77.49))
	{
		cout<<"Your Grade is 2.00. Rating-Good."<<endl;
	}
	
	else if ((grade >= 65.5)&&(grade <=71.99))
	{
		cout<<"Your Grade is 2.25. Rating-Very Satisfactory."<<endl;
	}
	
	else if ((grade >= 61)&&(grade <=65.49))
	{
		cout<<"Your Grade is 2.50. Rating-Satisfactory."<<endl;
	}
	
	else if ((grade >= 55.5)&&(grade <=60.99))
	{
		cout<<"Your Grade is 2.75. Rating-Fair."<<endl;
	}
	
	else if ((grade >= 50)&&(grade <=55.49))
	{
		cout<<"Your Grade is 3.00. Rating-Passed."<<endl;
	}
	
	else if (grade = 0)
	{
		cout<<"Your Grade is 4.00. Rating-Incomplete."<<endl;
	}
	
	else if ((grade >= 0)&&(grade <=49.99))
	{
		cout<<"Your Grade is 5.00. Rating-Failed."<<endl;
	}
	
	return 0;
	
}
