class Solution {
public:
    
    void print(int arr[], int n){
        for (int i = 0 ; i < n ; i++){
            cout << arr[i] << " " ; 
        }
        cout << endl; 
    }
    int maxScore(vector<int>& cardPoints, int k) {
//         int ans = 0 ; 
//         int front[cardPoints.size()+1] ;  // prefix sum from beginning 
//         int back[cardPoints.size()+1] ;       // peefix sum from end
        
//         front[0] = 0;
//         for (int i = 0 ; i <  cardPoints.size()  ; i ++ ){
//             front[i+1] = front[i] + cardPoints[i] ; 
//         }
        
//         back[0] = 0 ; 
        
//         for (int i = cardPoints.size()-1 ; i >= 0 ; i--){
//             back[cardPoints.size()-i] = cardPoints[i] + back[cardPoints.size()-i-1] ; 
            
//         }
//         // print(front , cardPoints.size()+1 ) ; 
//         // print(back , cardPoints.size() +1);
        
// //         we will select i from start and k - i from end ..
        
//         for (int i = 0 ; i <= k ; i++){
            
//             ans = max(ans , front[i]+back[k-i]) ;
//         }
        
        
//         return ans ;
        
        int ans = 0 ; 
        
        for (int i = 0 ; i < k ; i++){
            ans+=cardPoints[i] ; 
        }
        int res = ans ; 
        int j = cardPoints.size()-1 ; 
        for (int i = k-1 ; i >=0; i-- ){
            
            ans -= cardPoints[i];
            ans+= cardPoints[j] ; 
            j-- ;
            res = max(res , ans);
        }
        return res ; 
    }
};