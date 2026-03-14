class Solution {
public:
    typedef pair<int,int> pp;

    struct compare{
        bool operator()(pp a,pp b){
            if(a.first==b.first)
                return a.second<b.second;
            return a.first>b.first;
        }
    };
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        priority_queue< pp, vector<pp>,compare > pq;
        for(auto i: m){
            pq.push({i.second,i.first});
        }
        vector<int> ans;
        while(pq.size()>0){

            for(int i=0;i<pq.top().first;i++){
                ans.push_back(pq.top().second);
            }
            pq.pop();
        }
        return ans;
    }
};