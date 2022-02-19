#include<iostream>
using namespace std;
int main()
{
    int n,x,f=1;
    cout<<"Enter the number"<<endl;
    cin>>n;
    x=n;
    while(n>=1)
    {
        f=f*n;
        n--;
    }

    cout<<"Factorial of"<<" "<<x<<" is"<<" "<<f<<endl;

    return 0;
}