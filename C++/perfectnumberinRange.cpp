#include<iostream>
using namespace std;
int main()
{
  int start, end, n, i, sum;
  cout<<"Enter the starting number of the range"<<endl;
  cin>>start;
  cout<<"Enter the ending number of the range"<<endl;
  cin>>end;
  for(n=start;n<=end;n++)
  {
    sum=0;
    for(i=1;i<n;i++)
    {
      if(n%i==0)
      {
        sum=sum+i;
      }
    }
    if(n==sum)
    {
     cout<<n<<" ";
    }
  }

  return 0;
}