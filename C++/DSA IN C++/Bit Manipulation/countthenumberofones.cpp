// WAP to count number  of ones in binary representation of a number.
// Do the same thing as you find the power of a number untill we get 0.
#include<iostream>
using namespace std;

int numberofones(int n){
    int count=0;
    while(n){
        n = n & (n-1);
        count++;
    }
   return count; // If n=0 then n-1 doesnt exit. Therefore the whole expression becomes zero.
}

int main()
{
    cout<<numberofones(18)<<endl;
    return 0;
}