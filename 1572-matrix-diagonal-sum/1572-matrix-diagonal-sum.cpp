class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        long long int sum1 =0  ;
        
        for (int i=0 ; i < mat.size() ; i++){
            sum1 += mat[i][i]+mat[i][mat.size()-1-i];
        }
        if (mat.size()%2) {
            sum1 -= mat[mat.size()/2][mat.size()/2];
        }
        
        return sum1;
    }
};