/*
            as we have to take bitwise and , then at a position if we find zero in any of the number , 
            this will make bitwise and zero in our final answer .. 
            
            as number of bits in right more than left , 
            then answer will be always zero : 
            for example : 1 =   1 = 0001 
                        13 = 1101
                            then to number become more bits till then we have atleast got 0 in all the bits in the places belonging to left number in any of the number
                           
                if number of bit same ,
                then till the bits from starting same , add them in answer and then as soon as they are different break it , as that implies bit change , then the after bits also have been changed .. 
                
*/
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        
        vector <int> left1;
        vector <int> right1 ; 
        if (left == 0){return 0 ; }
        while (left > 0){
            left1.push_back(left%2);
            left/=2 ; 
        }
        while (right > 0){
            right1.push_back(right%2);
            right/=2 ; 
        }
        
        if (left1.size() < right1.size()){
            return  0 ; 
        }
        int ans = 0 ; 
        int multiplier = pow(2 , left1.size()-1) ; 
        for (int i = left1.size()-1 ; i >=0 ;i--){
            if (left1[i]==right1[i]){
                ans += (left1[i])*(multiplier); 
                multiplier/=2;
            }
            else {
                break;
            }
        }
        return ans;
        
    }
};