#include<iostream>
using namespace std;
int main()
{
    int n,r,c,temp,sum=0;
    cout<<"Enter the Number"<<endl;
    cin>>n;

    temp=n;
    while(n>0)
    {
        r=r=n%10;
        c=r*r*r;
        sum=sum+c;
        n=n/10;
    }

    if(temp==sum)
    cout<<"Armstrong Number"<<endl;
    else
    cout<<"Not Armstrong Number"<<endl;

    return 0;
}