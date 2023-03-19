class WordDictionary {
public:
    
    unordered_map <int , vector <string> > mp ; 
    WordDictionary() {
        
    }
    bool match(string &word , string &str){
        
        for (int i = 0 ; i < word.size() ; i++){
            
            if (word[i] == '.' || str[i] == '.'){
                continue;
            }
            if (word[i] != str[i]){
                return false;
            }
        }
        return true;
    }
    void addWord(string word) {
        mp[word.size()].push_back(word ) ; 
    }
    
    bool search(string word) {
          for(auto &&i:mp[word.size()])
       {
           if(match(i,word))return true;
       }
     return false;
       
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */