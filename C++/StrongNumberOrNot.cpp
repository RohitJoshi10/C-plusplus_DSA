#include<iostream>
using namespace std;
int main()
{
    int i,n,temp,r,fact,sum=0;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        fact=1;
        for(i=r;i>=1;i--)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        n=n/10;
    }
    
     n=temp;
    if(n==sum)
    cout<<"Strong Number"<<endl;
    else
    cout<<"Not Strong Number"<<endl;

    return 0;
}