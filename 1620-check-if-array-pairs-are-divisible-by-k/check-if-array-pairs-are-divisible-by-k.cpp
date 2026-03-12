class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>m;
        for(auto x:arr){
            x=((x%k)+k)%k;
            m[x]++;
        }if(m.find(0)!=m.end()) {
            if(m[0]%2!=0) return false;
            m.erase(0);
        }
        for(auto x:m){
            int ele=x.first;
            int rem=k-ele;
            if(m.find(rem)==m.end()) return false;
            if(m[ele]!=m[rem]) return false;

        }
        return true;
    }
};