class Solution {
public:
// samajhna padega
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        // we are not allowed to use the division operator
        vector <int> ans(n, 1);
        //prefix multiplication
        for(int i=1; i<n; i++){
            ans[i] = ans[i-1]*nums[i-1];
        }
        int suffix = 1;
        for(int i=n-2; i>=0; i--){
            suffix *= nums[i+1];
            ans[i] *= suffix;
        }
        return ans;
        
    }
};