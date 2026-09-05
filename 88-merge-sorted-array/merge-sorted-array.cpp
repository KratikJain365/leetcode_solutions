class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx = m+n-1;
        int i=m-1;
        int j=n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[idx]= nums1[i];
                i--;
                idx--;
            }
            else{
                nums1[idx]=nums2[j];
                j--;
                idx--;
            }
        }

        while(j>=0){//// Agar nums2 mein elements bach gaye hain,
        // to unhe directly nums1 mein copy kar do
            nums1[idx]=nums2[j];
                j--;
                idx--;
        }
        
        
    }
};