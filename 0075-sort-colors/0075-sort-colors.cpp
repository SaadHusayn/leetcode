class Solution {
public:
    void sortArray(vector<int>& nums, int start, int end){
        auto size = end - start;
        if(size == 0 || size == 1) return;
        
        int index = start;
        for(int i=start+1;i<end;i++){
            if(nums[i]<nums[index]) index = i;
        }
        
        swap(nums[start], nums[index]);
        
        sortArray(nums, ++start, end);
    }
    
    void sortColors(vector<int>& nums) {
        sortArray(nums, 0, nums.size());
    }
};