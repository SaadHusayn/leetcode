class Solution {
public:
    void revStringRecursion(vector<char> &s, int start){
        auto end = s.size() - start - 1;
        if(start>=end) return;
        
        swap(s[start++], s[end]);
        revStringRecursion(s, start);
    }
    void reverseString(vector<char>& s) {
        revStringRecursion(s, 0);
    }
};