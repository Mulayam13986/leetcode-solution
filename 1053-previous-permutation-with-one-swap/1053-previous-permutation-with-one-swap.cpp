class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int max1 = 0 ; 
        priority_queue < pair <int , int>> pq;
        for (int i = arr.size()-1 ; i > 0 ;i--){
                pair<int , int> a ; 
                a.first = arr[i];
                a.second = -i;
                pq.push(a);
            if (arr[i] < arr[i-1]){
                
                while(true){
                    pair <int  , int > top = pq.top();
                    if (top.first < arr[i-1]){
                        int temp = arr[i-1];
                        arr[i-1] = top.first;
                        arr[-top.second] = temp;
                        return arr;
                    }
                    pq.pop();
                }
            }  
        }
        return arr;
    }
};