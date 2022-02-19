#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;

    char ch;
    cout<<"Enter the choice: 1. Largest of three number 2. Smallest of three number"<<endl;
    cin>>ch;

    switch (ch)
    {
    case '1' :
        if(a>b && a>c)
        cout<<a<<" "<<"is the largest of the 3 numbers"<<endl;
        else if(b>c)
        cout<<b<<" "<<"is the largest of the 3 numbers"<<endl;
        else
        cout<<c<<" "<<"is the largest of the 3 numbers"<<endl;

        break;
    
    case '2' :
         if(a<b && a<c)
         cout<<a<<" "<<"is the Smallest of the 3 numbers"<<endl;
         else if(b<c)
         cout<<b<<" "<<"is the Smallest of the 3 numbers"<<endl;
         else
         cout<<c<<" "<<"is the Smallest of the 3 numbers"<<endl;
         
         break;

    default :
    cout<<"Invalid choice!!!"<<endl;
    break;
    
    }

    
    return 0;
}