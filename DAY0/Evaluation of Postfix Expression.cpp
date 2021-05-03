// { Driver Code Starts
// C++ program to evaluate value of a postfix expression
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        // Your code here
        stack<int> st;
        for(int i=0;i<s.size();++i){
            if(isdigit(s[i])){
                st.push(s[i]-'0');
            }   
            else{
                int val1=st.top(); st.pop();
                int val2=st.top(); st.pop();
                switch (s[i])
                {
                    case '-': st.push(val2-val1); break;
                    case '+': st.push(val1+val2); break;
                    case '*': st.push(val1*val2); break;
                    case '/': st.push(val2/val1); break;
                }
            }
        }
        return st.top();
    }
};
// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends