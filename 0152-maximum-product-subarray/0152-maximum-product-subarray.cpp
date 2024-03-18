class Solution {
public:
    int maxProduct(vector<int>& nums) {
        auto ans = *max_element(nums.begin(), nums.end());
        int suffix = 1, prefix = 1;
        int size = nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]==0){
                suffix *= nums[size-i -1];
                prefix =1;
                ans = max(ans, suffix);
            }
            else if(nums[size-1-i] == 0){
                suffix = 1;
                prefix *= nums[i];
                ans = max(ans, prefix);
            }
            else{
                suffix *= nums[size-i -1];
                prefix *= nums[i];
            
                ans = max(ans, prefix);
                ans = max(ans, suffix);
            }
            
        }

        return ans;
    }
};