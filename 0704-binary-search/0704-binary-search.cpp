class Solution {
public:
    int binarySearch(vector<int>& nums, int start, int end, int target){
        if(target == nums[start]) return start;
        if(target == nums[end]) return end;
        if(start > end || target<nums[start] || target>nums[end]) return -1;
        
        auto pos =  start + (end - start)*(target - nums[start])/(nums[end] - nums[start]);
        
        if(nums[pos] == target) return pos;
        
        else if(nums[pos] > target) return binarySearch(nums, start, pos - 1, target);
        
        else return binarySearch(nums, pos+1, end, target);
    
    
    }
    
    int search(vector<int>& nums, int target) {
        auto start = 0;
        auto end = nums.size() - 1;
        return binarySearch(nums, start, end, target);
    }
};