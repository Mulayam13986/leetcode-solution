class Solution {
public:
    long long findScore(vector<int>& nums) {
        
        unordered_map <int, vector<int>> mp ;
        
        for (int i  = 0 ; i < nums.size() ; i ++){
            mp[nums[i]].push_back(i);
        }
        vector < vector <int>> temp;
        for (auto i : mp) {
            vector <int> temp2 ; 
            temp2.push_back(i.first);
            // cout << endl <<  i.first << endl;
            for (int j = 0 ; j < i.second.size() ; j++){
                temp2.push_back(i.second[j]);
                // cout << i.second[j] << " ";
            }
            
            temp.push_back(temp2) ; 
            
        }
        
        sort(temp.begin() , temp.end());
        /*
        for (int i = 0 ; i < temp.size() ; i++){
            
            for (int j = 0 ; j < temp[i].size() ; j++){
                
                cout << temp[i][j] << " " ; 
            }
            cout << endl;
        }
       */
    
        unordered_map <int , int> check ; 
        long long score = 0 ;
        for(int j = 0 ; j < temp.size() ; j++){
            
            for (int k = 1 ; k < temp[j].size() ; k++){
                if (check.find(temp[j][k])== check.end()){     // or can use check[temp[j][k]] == 0 or also can use check.count(temp[j][k])
                    check[temp[j][k]]=1;
                    check[temp[j][k]+1]=1;
                    check[temp[j][k]-1]=1;
                    score+=temp[j][0];
                }
            }
        }
        
        return score;
    }
};

// or we can solve by priority queues