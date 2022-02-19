#include<iostream>

using namespace std;

int main()
{
	int number, i, j, count;
	
	cout << "\nPlease Enter the Number to find the Prime Factors =  ";
	cin >> number;
	
	for(i = 1; i <= number; i++)
   	{
   		count = 0;
    	if(number % i == 0)
      	{    		
      		for(j = 1; j <= i; j++)
      		{
      			if(i % j == 0)
      			{
      				count++;
				}				
			}
			if(count == 2)
			{
				cout << i << " is a Prime Factor\n";
			} 
      	}
   	}
		
 	return 0;
}