class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n - 1; 
        if( n==0){ // agar array mai sirf ek hi element exist karta hai to wahi ans hoga.
            return nums[0];
            }
        while (start <= end) {
            int mid = start + (end - start) / 2;
        if(mid==0){// mid 0 hua to mid-1 exist nhi karega isiliye
            return nums[mid];
        }
        if(mid== n-1){// mid n-1(full array size) hua to mid+1 exist nhi karega isiliye
            return nums[mid];
        }
        if(nums[mid] != nums[mid+1] && nums[mid]!= nums[mid-1]){
            return nums[mid];
        }

        if(mid %2== 0){//even elements on each side
            if (nums[mid] == nums[mid + 1]) { // array bana ke dekho samajh jaaoge, single
                                   // element mid+1 wali side hi hoga
                start = mid+1;
            } 
            else { // left side hoga
                end= mid-1;
            }
        }
        else{// odd elements on each side
            if(nums[mid] == nums[mid+1]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        }
        return nums[start];// at last start aur end equal ho jayenge isiliye chahe start ya end kuch bhi return kr sakte ho
    }
};