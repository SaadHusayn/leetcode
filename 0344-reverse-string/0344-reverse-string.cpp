class Solution {
public:
    void reverseString(vector<char>& s) {
        auto start = 0;
        auto end = s.size() -1;
        while(start<end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
};