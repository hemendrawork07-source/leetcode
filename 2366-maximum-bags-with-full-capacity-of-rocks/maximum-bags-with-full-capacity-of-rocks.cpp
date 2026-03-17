class Solution {
public:
    typedef pair<int,int> p;
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        priority_queue< int, vector<int>, greater<int> >pq;
        for(int i=0;i<capacity.size();i++){
            pq.push(capacity[i]-rocks[i]);
        }
        int result=0;
        while(additionalRocks && !pq.empty()){
            if(pq.top()==0 || pq.top()<=additionalRocks ){
            result++; 
            additionalRocks-=pq.top();
            pq.pop();
            }else{
                break;
            }
           
        }
        return result;
    }
};