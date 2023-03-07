class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long int i = 1 ;
        sort(time.begin() , time.end()) ; 
        long long int j = 1LL*totalTrips*time[0]; 
        // using binary search between minimum time and maximum time needed
        long long ans = INT_MAX ; 
        while (i <= j ){
          long long  int mid = i + ( j - i)/2 ;
            long long int trips = 0 ; 
          for (int k = 0 ; k < time.size() ; k++){
              trips += mid/time[k] ;     // counting number of trips if we have total time = mid
              if (trips > totalTrips){break ;} 
           }
            // cout << i << " " << j << " " << mid << " " <<  trips << endl;
           if (trips >= totalTrips){ans = mid ; j = mid-1 ; }else {i = mid+1;}
            // checking if trips in "mid" time is greater than total trips , then mid will be one of the 
            //possible answers and all value above mid will staify this , so we will check for lower 
            // values thus decreasing high to mid-1
            // if less than totalTrips required , this means we need more time so increasing low to mid+1
        } 
        return ans ;
    }
};