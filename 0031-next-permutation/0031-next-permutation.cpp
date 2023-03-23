class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int flag = 0 ; 
        int index = -1 ; 
        for (int i = nums.size()-1 ; i> 0 ; i--){         
            if (nums[i] > nums[i-1]){
                index = i-1;
 
            for (int j = nums.size()-1 ; j >= 0 ; j--){
                if (nums[index] < nums[j]){
                    swap(nums[index] , nums[j]);
                    break;
                }
            }
            break;
        }
        }
        reverse(nums.begin() + index + 1 , nums.end());
    }
};