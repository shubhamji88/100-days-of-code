 // { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& arr, int n) 
    {
        // code here 
        stack<int> s;
        for(int i=0;i<n;i++)
            s.push(i);
        while(s.size()!=1){
            int nn,m;
            nn=s.top();
            s.pop();
            m=s.top();
            s.pop();
            if(arr[nn][m]==1){
                s.push(m);
            }else{
                s.push(nn);
            }
        }
        for(int i=0;i<n;i++)
        {
            if((arr[s.top()][i]==1 || arr[i][s.top()]==0) && s.top()!=i){
                return -1;
            }
        }
        return s.top();
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends