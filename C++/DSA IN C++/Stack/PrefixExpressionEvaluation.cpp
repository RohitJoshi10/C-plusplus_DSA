#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int PrefixEvaluation(string s)
{
    stack<int> st; // Creation of the stack.

    for(int i=s.length()-1;i>=0;i--)
    {
         if(s[i]>='0' && s[i]<='9'){
             st.push(s[i]-'0'); // minus 0 because we have to push it as a integer not in its ascii value.
         }
         else{
             int op1=st.top();
             st.pop();
             int op2=st.top();
             st.pop();

             switch(s[i])
             {
                 case '+':
                 st.push(op1+op2);
                 break;

                 case '-':
                 st.push(op1-op2);
                 break;

                 case '*':
                 st.push(op1*op2);
                 break;

                 case '/':
                 st.push(op1/op2);
                 break;

                 case '^':
                 st.push(op1^op2);
                 break;
             }
         }
    }
    return st.top();
}
int main()
{
    cout<<PrefixEvaluation("-+7*45+20");
    return 0;
}
//"-+7*45+20"
// TC:- O(l),where l is the length of the string.

