typedef pair<int, int> pi;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ma;
        for (auto i:nums)ma[i]++;
        k--;
        priority_queue<pi, vector<pi>, greater<pi> > minh;
        for(auto i:ma){
            if(minh.size()>k){
                if(minh.top().first<i.second){
                    minh.push(make_pair(i.second,i.first));
                    minh.pop();
                }
            }else
            minh.push(make_pair(i.second,i.first));
            
        }
        vector<int> v;
        while (!minh.empty())
        {
           v.push_back(minh.top().second);
                minh.pop();
        }
        return v;
    
    }
};