#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the number till which you want prime numbers"<<endl;
    cin>>n;

    cout<<"Prime Numbers are:-"<<endl;//We use two for loops one for counting the numbers upto n and second nested for loop for validating if the number is prime or not.
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
        }

        if(c==2)
        cout<<i<<" ";
    }

    return 0;

}