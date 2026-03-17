class Solution {
public:
    typedef pair<int,int> p;
    int maximumUnits(vector<vector<int>>& nums, int truckSize) {
        priority_queue<p> pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i][1],nums[i][0]});
        }
        int result=0;
        while(!pq.empty() && truckSize!=0){
            truckSize--;
            int f=pq.top().first;
            int s=pq.top().second-1;
            result+=f;
            pq.pop();
            if(s!=0){
                pq.push({f,s});
            }
        } 
        return result;
    }
};