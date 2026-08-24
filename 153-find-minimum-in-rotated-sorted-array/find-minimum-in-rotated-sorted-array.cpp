class Solution {
public:
    int findMin(vector<int>& nums) {
        int start =0;
        int end = nums.size()-1;
        int mid;
        while(start<end){// index check karenge
            mid= start +(end-start)/2;
            if(nums[end] < nums[mid]){// left half sorted hai
                    start =mid+1;
                }
            else{// right half sorted hai;
                 end = mid;// mid bhi minimum ho sakta hai,
                }
        }
        return nums[end];     
    }
};