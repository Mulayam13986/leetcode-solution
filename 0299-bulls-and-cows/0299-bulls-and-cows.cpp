class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map <char , int > mp;
        int x =0 ; 
        int y = 0 ; 

        for (int i =0 ; i < secret.size() ; i++){
            if (secret[i]==guess[i]){
                x+=1 ;
                // cout << secret[i] << " " << guess[i] << endl;
            }
            else {
                mp[secret[i]]+=1;
            }
        }
        for(int i = 0 ; i < secret.size() ;i++ ){
            if ( guess[i] != secret[i] && mp[guess[i]] > 0){
                y+=1 ;
                mp[guess[i]]-=1 ;
            }
            
        }
        
        string ans ;
        ans+= to_string(x);
        ans+="A" ;
        ans+= to_string(y);
        ans+="B";
        
        return ans;
    }
};