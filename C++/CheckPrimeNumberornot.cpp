#include<iostream>
using namespace std;
int main()
{
    int n,i,flag=1;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        flag=0;
        break;
    }

    if(flag==0)
    {
        cout<<"Not a Prime Number"<<endl;
    }
    else
    cout<<"Prime Number"<<endl;

    return 0;
}


