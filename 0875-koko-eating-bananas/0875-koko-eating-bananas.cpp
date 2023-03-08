class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 ; // minimum speed
        long long int high = 0 ; 
        for (auto i : piles){  
            high+=i;    // maximum possible 
        }
        long long int ans = -1 ; 
        // using binary search
        while (low <= high) {
            long long mid = low + (high-low)/2;
            int time = 0 ;   // time taken to eat all piles 
            for (int j = 0 ; j < piles.size() ; j++){
                time+= ceil(piles[j]/(mid*1.0)) ;
                if (time > h ){break ; }  
            }
            if (time <= h){     // if at that eating speed , time requried is less than h 
                                // we will try to find if koko can finish all piles in <= h at lower pace
                ans = mid  ; // storing the ans 
                high = mid-1; 
            }
            else {
                low = mid+1 ;
            }
        }
        return ans ; // returning answer
    }
};