#include<iostream>
using namespace std;
int main()
{
   int num,n1=0,n2=1,n3,i,sum=1;
   cout<<"Enter the number"<<endl;
   cin>>num;
   cout<<"Fibonacci series\n";
   cout<<n1<<" "<<n2<<" ";

   for(i=2;i<num;i++)
   {
       n3=n1+n2;
       cout<<n3<<" ";
       n1=n2;
       n2=n3;
       sum=sum+n2;
    }
    cout<<endl;
    cout<<"Sum of the fibonacci series is = "<<sum<<endl;

    return 0;
}