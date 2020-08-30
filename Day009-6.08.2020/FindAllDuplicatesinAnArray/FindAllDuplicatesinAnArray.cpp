//  https://leetcode.com/problems/find-all-duplicates-in-an-array/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> soln;
        for(int i=0;i<nums.size();i++){
            int ind = abs(nums[i]);
            if(nums[ind-1]>0) nums[ind-1] = -nums[ind-1];
            else soln.push_back(ind);
        }
        return soln;
    }
};
