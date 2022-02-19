/*
ASCII Code is from 0-255
A-Z 65-90
a-z 97-122
0-9 48-57
special symbol 0-47,58-64,91-96,123-127
*/

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;

    if(ch>=65 && ch<=90)
    {
        cout<<ch<<" "<<"is a Upper case Alphabet"<<endl;
    }

    else if(ch>=97 && ch<=122)
    {
        cout<<ch<<" "<<"is a Lower case Alphabet"<<endl;
    }

    else if(ch>=48 && ch<=57)
    {
        cout<<ch<<" "<<"is a Number"<<endl;
    }

    else if((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127))
    {
        cout<<ch<<" "<<"is a Special Symbol"<<endl;
    }

    return 0;
}