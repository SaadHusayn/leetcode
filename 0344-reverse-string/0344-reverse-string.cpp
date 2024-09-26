class Solution {
public:
    void revStringRecursion(vector<char> &s, int start, int end){
        if(start>=end) return;
        
        swap(s[start++], s[end--]);
        revStringRecursion(s, start, end);
    }
    void reverseString(vector<char>& s) {
        revStringRecursion(s, 0, s.size()-1);
    }
};