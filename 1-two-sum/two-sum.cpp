class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int x=0;x<nums.size();x++){
            if(m.find(target-nums[x])!=m.end()){
                return {m[target-nums[x]],x};
            }else m[nums[x]]=x;
        }return {};
    }
};  