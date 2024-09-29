class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //map will contain values of nums1 along with their indexes
        map<int, int> m;
        for(auto i=0;i<nums1.size();i++){
            m[nums1[i]] = i;
        }

        //stack will contain all the elements which are in nums1 and whose greater element is to be find
        stack<int> s;

        //result vector
        vector<int> res(nums1.size(), -1);

        for(int i=0;i<nums2.size();i++){
            //if this element is greater than top, then we will set the values of element in the stack in result vector and empty the stack
            while(!s.empty() && (nums2[i]>s.top())){
                res[m[s.top()]] = nums2[i];
                s.pop();
            }

            if(m.find(nums2[i]) != m.end()){
                s.push(nums2[i]);
            }

        }

        return res;
    }
};