#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;

    int LC,UC;
    LC=(ch=='a' || ch=='e' || ch=='i' || ch=='o'  || ch=='u');
    UC=(ch=='A' || ch=='E' || ch=='I' || ch=='O'  || ch=='U');

    if(LC || UC)
    cout<<ch<<" "<<"is a vowel"<<endl;
    else
    cout<<ch<<" "<<"is a consonant"<<endl;

    return 0;
    
}