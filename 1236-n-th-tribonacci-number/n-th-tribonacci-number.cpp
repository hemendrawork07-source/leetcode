class Solution {
public:
    long long tribonacci(long long n) {
        if(n<=1) return n;
        if(n==2) return 1;
        vector<long long> dp(n+1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        for(long long i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n];
    }
};