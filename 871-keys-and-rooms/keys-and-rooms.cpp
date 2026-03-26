class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int> v;
        queue<int>q;
        q.push(0);
        v.insert(0);
        while(not q.empty()){
            int curr=q.front();
            q.pop();
            v.insert(curr);
            for(auto key:rooms[curr]){
                if(not v.count(key)){
                    q.push(key);
                    v.insert(key);
                }
            }
        }
        return v.size()==rooms.size();
        
    }
};