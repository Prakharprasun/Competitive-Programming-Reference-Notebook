// By: Prakhar Prasun, from: https://leetcode.com/problems/subsets/

void helper(vector<vector<int>> &ans, vector<int> &a, vector<int>& nums, int i) {
    if(i==nums.size()){
        ans.push_back(a);
        return;
    }
    a.push_back(nums[i]);
    helper(ans,a,nums,i+1);
    a.pop_back();
    helper(ans,a,nums,i+1);
}

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> a;
        helper(ans,a,nums,0);
        return ans;
    }
};