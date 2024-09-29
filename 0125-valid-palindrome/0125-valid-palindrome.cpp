class Solution {
public:    
    bool isPalindrome(string s) {
        for(auto i=0;i<s.length();i++){
            s[i] = tolower(s[i]);
        }
        
        int start = 0;
        int end = s.length() - 1;
        
        while(true){
            if(start>end) return true;
        
        if(!isalpha(s[start]) && !isdigit(s[start])){
            start++;
            continue;
        }
        else if(!isalpha(s[end]) && !isdigit(s[end])){
            end-- ;
            continue;
        }
        else{
            if(s[start] == s[end]){
                start++;
                end--;
                continue;
            }
            else return false;
           }
        }
        
    }
};