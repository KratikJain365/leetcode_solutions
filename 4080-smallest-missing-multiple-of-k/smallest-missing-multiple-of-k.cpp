class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        int temp;
        for(int i=1;; i++){
            temp = k*i;
            int flag =0;
            //check in nums
            for(int j=0;j<n; j++){
                if(temp == nums[j]){
                    flag =1;
                    break;//ye loop yahi break ho jayega.
                }
            }
            if(flag == 0){// iska mtlb hai nhi mila jisse flag ki value change hi nhi hui
                return temp;
            }
        }
         
        
    }
};