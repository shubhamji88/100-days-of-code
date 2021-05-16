#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    priority_queue <int> maxh;
        vector<int> v;
	    for(int i=0;i<n;i++){
            maxh.push(arr[i]);
            if(maxh.size()>m){
                v.push_back(maxh.top());
                maxh.pop();
            }
        }
        while (!maxh.empty())
        {
           v.push_back(maxh.top());
                maxh.pop();
        }
        for(i:v){
            cout<<i<<" ";
        }
	}
	return 0;
}