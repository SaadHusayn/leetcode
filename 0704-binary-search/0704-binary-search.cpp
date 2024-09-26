class Solution {
public:
    int binarySearch(vector<int>& nums, int start, int end, int target){
        if(start > end) return -1;
        
        auto mid = start + (end-start)/2;
        
        if(nums[mid] == target) return mid;
        
        else if(nums[mid] > target) return binarySearch(nums, start, mid - 1, target);
        
        else return binarySearch(nums, mid+1, end, target);
    
    
    }
    
    int search(vector<int>& nums, int target) {
        auto start = 0;
        auto end = nums.size() - 1;
        return binarySearch(nums, start, end, target);
    }
};