#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter the number"<<endl;
    cin>>n;

    for(i=1;i<n;i++)//or can be n/2
    {
        if(n%i==0)
        sum=sum+i;
    }
    
    if(sum==n)
    cout<<"Perfect Number"<<endl;
    else
    cout<<"Not a Perfect Number"<<endl;

    return 0;
}

