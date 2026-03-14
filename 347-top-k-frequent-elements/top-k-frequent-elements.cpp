class Solution {
public:
    typedef pair<int,int> pp;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(auto i: nums){
             m[i]++;
        }
        priority_queue< pp, vector<pp>, greater<pp > > pq;
        for(auto x:m){
            pq.push({x.second,x.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};