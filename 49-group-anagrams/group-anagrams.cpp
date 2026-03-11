class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map< string,vector<string> >m;
        for(auto x:strs){
            string lexo=x;
            sort(lexo.begin(),lexo.end());
            if(m.find(lexo)==m.end()){
                vector<string> v;
                v.push_back(x);
                m[lexo]=v;
            }else{
                m[lexo].push_back(x);
            }
        }
        for(auto x:m){
            ans.push_back(x.second);
        }
        return ans;
    }
};