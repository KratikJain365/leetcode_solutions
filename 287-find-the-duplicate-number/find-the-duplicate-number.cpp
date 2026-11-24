class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n= nums.size();
        // int ans =0; //BRUTE FORCE
        //     int i =0
        //     int temp = nums[i];
        //     for(int j=i+1; j< n; j++){
        //         if(nums[j]== temp){
        //             ans = nums[j];
        //             break;
        //         }
        //     }
        //      i++;
        // return ans;

        sort(nums.begin(), nums.end());
        for(int i=0; i<n-1; i++){
            if(nums[i] == nums[i+1]){
                return nums[i];
                break;
            }
        }
        return 0;
    }
};