class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        for(int i=0;i<nums.size();i++){
            int a = nums[i];
            int b = target - nums[i];
            if(m.find(b) != m.end()){
                return {i, m[b]};
            }
            m[a] = i;
        }
        return {0, 0};
    }
};