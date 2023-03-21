class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long int subarray_count = 0 ; 
        long long int zero_count =0  ; // to keep count of consecutive zeroes
        
        for (int i =0 ; i < nums.size() ; i++){
            if (nums[i]==0){
                zero_count+=1;
            }
            else {
                subarray_count+=((zero_count)*(zero_count+1))/2;
                zero_count = 0 ;
            }
        }
        if(zero_count){
            subarray_count+=((zero_count)*(zero_count+1))/2;
        }
        return subarray_count;
    }   
};