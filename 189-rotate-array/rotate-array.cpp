class Solution {
public:

    void reverse(vector<int>& nums, int start, int end){
        while(start <= end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        
        start++;
        end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k % n == 0){
            return; 
        } 
        k = k % n;
        reverse(nums, 0,n-1);// poori array reversxe karo
        reverse(nums, 0,k-1);// 0 se k-1 tk ki reverse kro, then
        reverse(nums, k, n-1);//k se end  of array tk ki reverse karo
    }
};