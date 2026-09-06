class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1;
        int n = nums.size();
        for(int i = n-2; i >= 0; i--) {// for finding the pivot element.
            if(nums[i] < nums[i+1]) {
            pivot = i;
            break;
            }
        }
        if(pivot == -1) {// in caase array jo di gayi hai wo hi max possible number ho, to us case m hume un sabhi numbers se possible smallest digit banani hai.
            sort(nums.begin(), nums.end());
            return;
        }
        for(int i=n-1;i>=0;i--){// for swapping the next larger number to the pivot so strat from end
            if(nums[pivot]<nums[i]){
                swap(nums[pivot], nums[i]);
                break;
            }
        }
        int i =pivot+1;
        int j= n-1;
        while(i<=j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        
    }
};