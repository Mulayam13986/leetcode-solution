class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin() , nums.end() , greater()) ; 
        long long int sum1 = 0; 
        int count =0 ;
        for (int i = 0 ; i < nums.size() ; i++){
            
            sum1+=nums[i];
            if (sum1 >0){count+=1;}
        }
        
        return count;
    }
};