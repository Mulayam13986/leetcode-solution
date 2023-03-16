class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        long long int count = 0 ; 
        unordered_map <int , int> mp ; 
        mp[0] = 1 ; 

        for (int i = 1 ; i < nums.size() ; i++){
            nums[i] += nums[i-1] ;
        }
        for (int i = 0 ; i < nums.size();i++){ 
            if (mp.count(nums[i]-k)){
                count+= mp[nums[i]-k];
            }
            mp[nums[i]]+=1 ;
        }
        return count;
    }
};