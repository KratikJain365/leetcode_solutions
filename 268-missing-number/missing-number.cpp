class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int x=0;
        int sum =0;
        int ans=0;
        for(int j=0; j<=n; j++){
            sum+=j;
        }
        for(int i = 0; i < n; i++) {
            x+=nums[i];
            }
            ans =sum-x;
        return ans;
    }
};