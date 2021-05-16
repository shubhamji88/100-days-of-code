#include <iostream>
#include <queue>
#include <vector>
#include <cstdlib>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> maxh;
        for(int i=0;i<arr.size();i++){
            if(maxh.size()>k-1){
                if(maxh.top().first>abs(arr[i]-x)){
                    maxh.push(make_pair(abs(arr[i]-x),arr[i]));
                    maxh.pop();
                }
            }else{
                maxh.push(make_pair(abs(arr[i]-x),arr[i]));
            }
        }
        vector<int> v;
        while (!maxh.empty())
        {
           v.push_back(maxh.top().second);
                maxh.pop();
        }
        sort(v.begin(),v.end());
        return v;
    }
};