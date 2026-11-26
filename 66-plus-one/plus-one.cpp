class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
    for(int i=n-1;i>=0; i--){// start traversal and just checking all digits , if any digit falls under these conditions then perform operation else remains same.
            //case1: if all degits are less than 9.
            if(digits[i]<9){
                digits[i]++;// plus one
                return digits;
            }
            // case2: if any of the digit is 9.
            else{
            digits[i] = 0;
            }
            }
            // if the whole array is filled with all 9's the we have to create a new array with n+1 elements and assign the first element to 1, and rest all 0.
            vector<int> arr(n+1, 0);
                arr[0] =1;
            return arr;
        }
};