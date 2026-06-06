class Solution {
public:

    int mySqrt(int x) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        if(x==0||x==1) return x;
        int low=0,high=x/2,ans=0;

        while(high>=low){

            long long mid=low+(high-low)/2;

            if(mid*mid==x){
                return mid;
            }else if(mid*mid<x){
                ans=mid;
                low=mid+1;
            }else {
                high=mid-1;
            }
        }
        return ans;
    }
};