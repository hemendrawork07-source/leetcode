class Solution {
public:
    typedef pair<int,int> pp;
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        priority_queue< pp > pq;
        for(auto i:nums){
            pq.push({abs(x-i),i});
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};