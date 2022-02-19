// WAP to find unique number in an array where all numbers except one, are present twice ?
#include<iostream>
using namespace std;
int unique(int arr[], int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}

int main()
{
    int arr[7]={2,4,6,3,4,6,2};
    cout<<unique(arr,7);

    return 0;
}