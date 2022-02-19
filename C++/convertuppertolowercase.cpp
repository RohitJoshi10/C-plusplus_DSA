#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;
//a to z= 97 to 122 and A to Z=65 to 90
     if(ch>=65 || ch<=90)
    {
        ch=ch+32;//converting upper case character to lower case
        cout<<ch<<endl;
    }

    // if(ch>=97 || ch<=122)
    // {
    //     ch=ch-32;//converting lower case character to upper case
    //     cout<<ch<<endl;
    // }
 
    return 0;
}