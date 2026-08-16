class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid;
        int start = 0;
        int n = nums.size();
        int end = n-1;
        while(start<= end){// index check karenge
            mid= start +(end-start)/2;
            if(target == nums[mid]){// mid is target// values check karenge
                return mid;
            }
            if(nums[start] <= nums[mid]){// left half sorted hai
                if(nums[start] <= target && target <= nums[mid]){// left half mai target element hai;
                    end = mid-1;
                }
                else{// nhi hai;
                    start = mid+1;
                }
            }
            else{// right half sorted hai;
                if(nums[mid] <= target && target <= nums[end]){// right half range maii target hai
                 start = mid+1;
                }
                else{// nhi hai;
                    end = mid-1;
                }
            }
        }
        return -1;        
    }
};