// By: Prakhar Prasun, as a part of LeetCode biweekly-contest-141

int clearTrailingOnes(int num) {
    int mask = 0;
    int bitPos = 0;

    while ((num & (1 << bitPos)) != 0) {
        bitPos++;
    }

    mask = (1 << bitPos) - 1;
    
    return num & ~mask;
}

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n= int(nums.size());
        vector<int> ans(n);
        for(int i=0; i< n; i++){
            int x=nums[i];
            int c=0;
            if(x%2==0){
                ans[i]=-1;
            }
            else{
                int s = clearTrailingOnes(x);
                for(int j=s;j<=x;j++){
                    if((j | j+1)==x){
                        ans[i]=j;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};