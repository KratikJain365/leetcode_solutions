class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // BS on total Rows
        int m = matrix.size(); //rows ka size
        int n = matrix[0].size(); // columns ka size
        int startRow = 0;
        int endRow = m-1;
        while(startRow <= endRow){
            int midRow = startRow + (endRow - startRow)/2;
            if(matrix[midRow][0] <= target && target <= matrix[midRow][n-1]){// midRow mai hi target element hai, isi mai BS laga do
            int start = 0;
            int end = n-1;
            while(start <= end){
                int mid = start + (end - start)/2;
                if(matrix[midRow][mid] == target){
                    return true;
                }
                else if(target > matrix[midRow][mid]){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
                return false;
            }
            else if(target > matrix[midRow][n-1]){ // target ki value midRow ke last element se jyada hai., to start ko next line mai shift kardo 
                startRow = midRow +1;
            }
            else{
                endRow = midRow -1;
            }
        }
        return false;
    }
};