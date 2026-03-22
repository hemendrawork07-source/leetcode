class Solution {
public:
    vector<int> dp;
    int helper(vector<int>& nums,int i){
        if(i==nums.size()-1) return nums[i];
        if(i==nums.size()-2) return max(nums[i],nums[i+1]);
        if(dp[i]!=-1) return dp[i];
        dp[i]=max(nums[i]+helper(nums,i+2),0+helper(nums,i+1));
        return dp[i];
    }
    int rob(vector<int>& nums) {
        dp.clear();
        dp.resize(101,-1);
        return helper(nums,0);
    }
};