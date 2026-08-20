class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>& ans = nums;// iska mtlb haai dono ab same vector ko refer karenge , dono ki value same hogi
        ans.insert(ans.end(), nums.begin(), nums.end());
        return nums;
        
    }
};