class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        int j=0;
        for(int i=0; i<n ; i++){
            if(nums[i]!=0){
                nums[j]=nums[i];// ith index wali value jth index pe store ho jayegi
                j++;
            }

        }
        while(j < n){
            nums[j]=0;// ab sabhi bachi hui jagha pe 0 bahr do
            j++;
        }
        
    }
};