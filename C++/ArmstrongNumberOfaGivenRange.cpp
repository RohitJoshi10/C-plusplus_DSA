// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j,r,c,temp,sum=0;
//     int min,max;
    
//     cout<<"Enter the range (min to max)"<<endl;
//     cin>>min>>max;
//     cout<<"Armstrong Numbers are\n";
//     for(i=min;i<=max;i++)
//     {
//         temp=i;
//         while(j!=0)
//         {
//             r=j%10;
//             c=r*r*r;
//             sum=sum+c;
//             j=j/10;
//         }

//         if(sum==i)
//         cout<<i<<" ";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
  int num1, num2, i, num, digit, sum;

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter second number: ";
  cin >> num2;

  cout << "Armstrong numbers between " << num1 << " and " << num2 << " are: " << endl;
  for(i = num1; i <= num2; i++)
  {
        sum = 0;
        num = i;

        for(; num > 0; num /= 10)
        {
            digit = num % 10;
            sum = sum + digit * digit * digit;
        }

        if(sum == i)
        {
            cout << i << endl;
        }
  }

  return 0;
}