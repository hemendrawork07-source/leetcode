class Solution {
public:
    bool closeStrings(string w1, string w2) {
        if(w1.length()!=w2.length()) return false;
        sort(w1.begin(),w1.end());
        sort(w2.begin(),w2.end());
        unordered_map<char,int> m1,m2;
        for(auto x:w1){
             m1[x]++;
        }
        for(auto x:w2){
             m2[x]++;
        }
       
        for(auto x:m1){
            if(m2.find(x.first)==m2.end()) return false;
        }
        unordered_map<int,int> h1,h2;
        for(auto x:m1){
            int freq=x.second;
            h1[freq]++;
        }
        for(auto x:m2){
            int freq=x.second;
            h2[freq]++;
        }
        for(auto x:h1){
            int key=x.first;
            if(h2.find(key)==h2.end())return false;
            if(h2[key]!=h1[key]) return false;
        }
        return true;
    }
};