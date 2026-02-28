class Solution {
public:
    int rev(int n){
    int reno = 0;
    while(n > 0){
        reno = reno * 10 + (n % 10);
        n /= 10;
    }
    return reno;
}
    int countNicePairs(vector<int>& nums){
        unordered_map<int,int> s;
        int count=0;
        for(int i=0;i<nums.size();i++){
            nums[i]-=rev(nums[i]);
            
        }
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()){
                count%=1000000007;
                count+=s[nums[i]];
                s[nums[i]]++;
            }else s[nums[i]]++;
        }
        
        return count%=1000000007;
    }
};