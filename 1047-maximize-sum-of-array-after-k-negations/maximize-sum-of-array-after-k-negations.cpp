class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
            sum+=nums[i];
        }
        while(k--){
            int ele=pq.top();
            if(ele==0) break;
            sum-=ele;
            pq.pop();
            sum+=(-1*ele);
            pq.push(-1*ele);
        }
        return sum;
    }
};