class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue < int > pq ; 
        int len = stones.size();
        
        for (int i = 0 ; i < len ; i++){
            pq.push(stones[i]);
        }
        
        while (pq.size() > 1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            if(a!=b){
                pq.push(a-b);
            }
        }
        if(pq.size()){return pq.top();}
        return 0;
    }
};