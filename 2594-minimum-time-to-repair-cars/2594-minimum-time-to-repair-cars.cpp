class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long int low = 1 ; 
        long long int high = LLONG_MAX ;
        long long int ans = high ; 
        
        // using binary search
        while (low <= high){
            
            long long mid = low + (high-low)/2 ;  //  the time taken
            
            long long int temp_car = 0 ;
            
            
            
            for (int i = 0 ; i < ranks.size() ; i++){
                
                temp_car +=  sqrt(mid/ranks[i]) ;   // number of cars repaired in mid seconds 
                
                if (temp_car >= cars){break;}
            }
            // cout << high << " " << low << " " << mid << endl;
            if (temp_car >= cars){
                ans =mid;
                high = mid-1; 
            }
            else {
                low = mid+1;
            }
        }
        
        return ans;
        
    }
};