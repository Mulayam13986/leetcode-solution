class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 ;
        long long int high = 0 ; 
        for (auto i : piles){
            high+=i;
        }
        long long int ans = 1 ; 
        while (low <= high) {
            long long mid = low + (high-low)/2;
            int time = 0 ;
            for (int j = 0 ; j < piles.size() ; j++){
                time+= ceil(piles[j]/(mid*1.0)) ; 
                if (time > h ){break ; }
            }
            if (time <= h){
                ans = mid  ; 
                high = mid-1; 
            }
            else {
                low = mid+1 ;
            }
        }
        return ans ; 
    }
};