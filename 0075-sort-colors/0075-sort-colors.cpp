class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(auto i=0;i<nums.size()-1;i++){
            for(auto j=0;j<nums.size()-i-1;j++){
                if(nums[j+1]<nums[j]) swap(nums[j+1], nums[j]);
            }
        }
    }
};