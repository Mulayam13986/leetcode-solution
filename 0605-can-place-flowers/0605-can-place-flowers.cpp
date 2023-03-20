class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int a = flowerbed.size() ;
        
        vector <int> v ; 
        v.push_back(0) ; 
        for (int i = 0 ; i < a ; i++){
            v.push_back(flowerbed[i]);
        }
        v.push_back(0);
        
        int count = 0 ;
        int i = 1 ;
        while(i <=a){
            
            if (v[i]== 0 && v[i+1]==0 &&v[i-1]==0 ){
                count+=1;
                i+=2 ;
            }
            else {
                i+=1;
            }
            if (count>=n){return 1;}
        }
    return 0 ; 
    } 
};