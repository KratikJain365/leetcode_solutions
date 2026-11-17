class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int startRow = 0;
        int startCol = 0;
        int endRow = m-1;
        int endCol = n-1;
        vector<int> ans;


        while(startRow <= endRow && startCol <= endCol){
            for(int i = startCol; i<= endCol; i++){//top layer
                ans.push_back(matrix[startRow][i]);
            }
            for(int j = startRow +1; j<= endRow; j++){// right layer
                ans.push_back(matrix[j][endCol]);
            }
            for(int i = endCol-1; i>=startCol ; i--){// bottom layer
                if(startRow == endRow){
                    break;
                }
                ans.push_back(matrix[endRow][i]);
            }
            for(int j = endRow-1; j>= startRow+1; j--){// left layer
                if(startCol == endCol){
                    break;
                }
                ans.push_back(matrix[j][startCol]);
            }
            startRow++;
            startCol++;
            endRow--;
            endCol--;
        }
        return ans;
    }
};