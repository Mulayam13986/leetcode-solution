class Solution {
public:
    string minWindow(string s, string t) {
        
        int  upper[26] = {0} ; 
        int lower[26] = {0};
        
        for (int i  =0 ; i < t.size() ; i++){
            if (t[i] - 'a' < 0 ){
                upper[t[i] -'A'] +=1 ;
            }
            else {
                lower[t[i] - 'a']+=1;
            }
        }
        
        int i = 0 ; 
        int j = 0 ; 
        int us[26] = {0};
        int ls[26] = {0} ;
        vector <int> res ;
        res.push_back(INT_MAX);
        res.push_back(0);
        int check = 0 ; 
        while( i < s.size()){
            if (s[i] - 'a' < 0 ){
                us[s[i] -'A'] +=1 ;
            }
            else {
                ls[s[i] - 'a']+=1;
            }
            int flag = 1 ;
            for (int i = 0 ; i <26 ; i++){
                
                if (  us[i] < upper[i] || ls[i] < lower[i]){
                    flag = 0 ; 
                    break ;
                }
            }
            
            if (flag== 1){
                // cout  << "check" << endl;
                while (j < i){
                    if (s[j] - 'a' < 0 ){
                        if (us[s[j]-'A']-1 >= upper[s[j] - 'A'] ){
                            us[s[j] - 'A']-=1 ; 
                            j++;
                        }
                        else {
                            break; 
                        }
                    }
                    else {
                        if (ls[s[j]-'a']-1 >= lower[s[j] - 'a'] ){
                            ls[s[j] - 'a']-=1 ; 
                            j++;
                        }
                        else {
                            break; 
                        }
                        
                          }
                }
                // cout << i << " " <<j << endl ;
                
                if (res[0] - res[1] > i-j){
                    // cout << i << " " << j << endl ;
                    res[0] = i ; 
                    res[1] = j;
                    check = 1  ;
                }
                
            }
            i++;
            
            
        }
        if (check == 0 ){return "";}
        // cout << res[0] << " " <<  res[1] << endl;
        string answer = "";
        for (int i = res[1] ; i < res[0]+1;i++){
            answer+=s[i];
        }
        return answer;
    }
};