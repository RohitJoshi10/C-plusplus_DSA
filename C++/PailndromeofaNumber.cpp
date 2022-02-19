#include<iostream>
using namespace std;
int main()
{
    int n,x,rev=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    x=n;
    while(n>0)
    {
        rev=(rev*10)+n%10;
        n=n/10;
    }

    if(rev==x)
    cout<<"Pailndrome"<<endl;
    else
    cout<<"Not Pailndrome"<<endl;

    return 0;
}