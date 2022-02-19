#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0;
    cout<<"Enter a number"<<endl;
    cin>>n;

    while(n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }

    cout<<"sum of digits = "<<s<<endl;
    return 0;
}