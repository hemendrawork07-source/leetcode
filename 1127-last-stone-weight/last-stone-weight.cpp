class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        priority_queue<int> pq;
        for(auto i:nums){
            pq.push(i);
        }
        while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            int a=abs(x-y);
            pq.push(a);
        }
        return pq.top();
    }
};