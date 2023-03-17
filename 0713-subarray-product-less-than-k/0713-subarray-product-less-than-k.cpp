class Solution {
public:
int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long long product = 1 ;
        int i = 0 ;
        int j = 0 ; 
        long long int count =0 ; 
        while ( i < nums.size() || j < nums.size()){
            
            
            if (i < nums.size() && (product*(nums[i]) < k)){
                product = product*nums[i] ; 
                // cout << "first" << count <<" " << i << " "<< j <<  endl;
                count+=1;
                // cout << i << " " << j << " " << count <<  endl;
				i+=1;
				
            }
            else if ( j < i){
                count+= max(i-j-1, 0 ); 
                // cout << " second" << endl ;
                product/=nums[j];
				// cout << i << " " << j << " " << count << endl;
                j++;
            }
            else {
                // cout << "third" << endl;
                product = 1;
                i+=1 ;
                j= i  ;
            }

        }
        return count  ;
    }
};