class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int sum  =  (size * (size+1))/2;
        
        for(auto i:nums) sum-=i;
        
        return sum;
    }
};