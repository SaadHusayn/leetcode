class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int n=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(') st.push(s[i]);
            else{
                if(st.empty()){
                    n++;
                }else{
                    st.pop();
                }
            }
        }
        
        while(!st.empty()){
            n++;
            st.pop();
        }
        
        return n;
    }
};