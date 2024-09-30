class Solution {
public:
    void sortArray(vector<int>& nums, int size){
        if(size == 0 || size == 1) return;
        
        for(int i=0;i<size-1;i++){
            if(nums[i+1]<nums[i]) swap(nums[i+1], nums[i]);
        }
        sortArray(nums, --size);
    }
    
    void sortColors(vector<int>& nums) {
        sortArray(nums, nums.size());
    }
};