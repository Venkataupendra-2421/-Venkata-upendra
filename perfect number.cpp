#include<iostream>

using namespace std;

int main()
{
	int number, i, sum = 0;
	
	cout << " Enter the number   =  ";
	cin >> number;
	
	for(i = 1 ; i < number ; i++)
	{
		if(number % i == 0)
		{
			sum = sum + i;
		}
	}
			
	if(number == sum)
	{
		cout << number << " is a Perfect Number";
	}
	else
	{
		cout << number << " is Not a Perfect Number";
	}
 	return 0;
}
