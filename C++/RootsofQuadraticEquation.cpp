#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,D,R1,R2,rp,ip;
    cout<<"Enter coefficients a,b and c"<<endl;
    cin>>a>>b>>c;

    D=b*b-4*a*c;

    // condition for real and different roots
    if(D>0)
    {
        R1=(-b+sqrt(D))/(2*a);
        R2=(-b-sqrt(D))/(2*a);
        cout<<"Root1 = "<<R1<<"Root2 = "<<R2<<endl;
    }

    // condition for real and equal roots
    else if(D==0){
       R1=R2=-b/(2*a);
    cout<<"Root1=Root2=  "<<R1<<endl; 
    }

    // if roots are not real
    else{
           rp=-b/(2*a);
           ip=sqrt(-D)/(2*a);
           cout<<"Root1 =  "<<rp<<"+"<<ip<<"i"<<"  "<<"Root2 =  "<<rp<<"-"<<ip<<"i"<<endl;
        }

        return 0;
}