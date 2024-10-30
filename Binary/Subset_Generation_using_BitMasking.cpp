// By : Prakhar Prasun , From : https://leetcode.com/problems/subsets/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int x = (1 << n);
        vector<vector<int>> ans;
        for(int mask=0 ; mask < x ; mask++){
            vector<int> sub;
            for(int i=0;i<n;i++){
                if((mask & (1<<i)) != 0){
                    sub.push_back(nums[i]);
                }
            }
            ans.push_back(sub);
        }
        return ans;
    }
};