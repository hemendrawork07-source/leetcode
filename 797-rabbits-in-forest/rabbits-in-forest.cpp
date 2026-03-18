class Solution {
public:
    int numRabbits(vector<int>& answer) {
        unordered_map<int,int> m;
        int ans=0;
        for(int i=0;i<answer.size();i++){
            if(!m[answer[i]+1]){
                ans+=answer[i]+1;
                if(answer[i]==0) continue;
                m[answer[i]+1]=1;
            }else {
                m[answer[i]+1]++; 
                if(m[answer[i]+1]==answer[i]+1) m.erase(answer[i]+1);
                
            }
        }
        return ans;
    }
    
    };         

    // int ans=0,freq=0;
        // for(auto x:m){
        //     if(x.first==0){
        //         freq+=0;
        //         ans+=x.first;
        //     }else if(x.first+1>=x.second){
        //         freq+=x.second-1;
        //         ans+=x.first;
        //     }else if(x.first+1<x.second){
        //         freq=x.second-x.first;
        //         ans+=2*x.first+1;
        //     }
        // }
        // ans+=answers.size()-freq; 