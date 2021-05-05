#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stack>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>> res;
        if(arr.size()==0)
            return res;
        vector<int> temp=arr[0];
        for(auto i:arr){
            if(i[0]<temp[1]){
                temp[1]=max(i[1],temp[1]);
            }else{
                res.push_back(temp);
                temp=i;
            }
        }
        res.push_back(temp);
        return res;
    }
};