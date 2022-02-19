// 1. Divide the number repeateadly by 2. If zero then it is power of otherwise not.
// 2. Using bit manipulation

// WAP to check if a given number is power of 2.

#include<iostream>
using namespace std;

bool ispowerof2(int n){
   
   return (n && !(n & n-1)); // If n=0 then n-1 doesnt exit. Therefore the whole expression becomes zero.
}

int main()
{
    cout<<ispowerof2(7)<<endl;
    return 0;
}