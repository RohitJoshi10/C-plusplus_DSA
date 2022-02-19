#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the two numbers"<<endl;
    cin>>a>>b;
    
    char op;
    cout<<"Enter the operator(+,-,*,/,%) for performing operation"<<endl;
    cin>>op;

    switch(op)
    {
        case '+': cout<<"Sum is ="<<" "<<a+b<<endl;
        break;
        case '-': cout<<"Difference is ="<<" "<<a-b<<endl;
        break;
        case '*': cout<<"Multiplication is ="<<" "<<a*b<<endl;
        break;
        case '/': cout<<"Division  is ="<<" "<<a/b<<endl;
        break;
        case '%': cout<<"Remainder is ="<<" "<<a%b<<endl;
        break;
        default: cout<<"INVALID CHOICE!!!"<<endl;

    }

    return 0;
}