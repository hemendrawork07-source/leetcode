class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_set<int> s;
        s.insert(edges[0][0]);
        s.insert(edges[0][1]);
        int ans;
        for(auto x:edges[1]){
            if(s.find(x)!=s.end()) ans=x;
        } 
        return ans;
    }
};