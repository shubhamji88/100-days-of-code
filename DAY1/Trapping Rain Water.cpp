// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        // Code here
        int right[n],left[n];
        left[0]=arr[0];
        right[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            if(left[i-1]<arr[i]){
                left[i]=arr[i];
            }else{
                left[i]=left[i-1];
            }
        }
        for(int i=n-2;i>=0;i--){
            if(right[i+1]>arr[i]){
                right[i]=right[i+1];
            }else{
                right[i]=arr[i];
            }
        }
        int res=0;
        for(int i=0;i<n;i++){
             res+=min(left[i],right[i])-arr[i];
        }
        return res;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends