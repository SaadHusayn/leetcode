class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        int prefix = 1, postfix = 1;
        vector<int> ans(size, 1);
        for(int i=0;i<size;i++){
            prefix *= nums[i];
            postfix *= nums[size-i-1];

            if(i != size - 1) ans[i+1]*=prefix;
            if(i != size - 1) ans[size-i-2] *= postfix;
        }

        return ans;
    }

};