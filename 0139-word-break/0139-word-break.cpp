class Solution {
public:
    unordered_map<string, bool> memo;
    
    string shortString(string s,string word){
        string res = s;
        auto sahiHai = true;
        int i=0;
        for(;i<s.length() && i<word.length();i++){
            if(s[i] != word[i]){
                sahiHai = false;
                break;
            }
        }
        
        if(sahiHai && i==word.length()){
            res = res.substr(word.length());
        }
        
        return res;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        if(memo.find(s) != memo.end()) return memo[s];
        
        for(auto i=0;i<wordDict.size();i++){
            if(s==wordDict[i]){
                memo[s] = true;
                return true;
            }
            
            auto shortenString = shortString(s, wordDict[i]);
            
            
            if(shortenString != s){
                if(wordBreak(shortenString, wordDict)){
                    memo[s] = true;
                    return true;
                };
            }
            
        }
        memo[s] = false;
        return false;
    }
};