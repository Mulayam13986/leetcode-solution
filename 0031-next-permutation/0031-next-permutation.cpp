class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int flag = 0 ; 
        for (int i = nums.size()-1 ; i> 0 ; i--){
            
            if (nums[i] > nums[i-1]){
                
                int temp = nums[i];
                int index = i ; 
                for (int j = i ; j < nums.size() ; j++){
                    if (nums[j] < temp && nums[j] > nums[i-1]){
                        index = j ;
                        temp = nums[j];
                    }
                }
                swap(nums[i-1] , nums[index]);
                
                sort(nums.begin()+i , nums.end() );
                flag = 1 ; 
                break;
            }
        }
        
        if (!flag){
            sort(nums.begin() , nums.end());
        }
    }
};