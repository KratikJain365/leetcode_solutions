class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> s;
        vector<int> ans;
        int n = grid.size();
        int a =0;
        int b=0;
        int actualSum =0;
        int expectedSum =0;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                actualSum += grid[i][j]; //actual sum calculate karenge.


                //repeated value ke liyee-->
                if(s.find(grid[i][j]) != s.end()){ //agar grid ka number set mai nhi hai to set mai insert kar denge
                    a = grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
        }

        expectedSum = (n*n)*(n*n+1) / 2;

        b= expectedSum + a - actualSum;
        ans.push_back(b);
        return ans;
    }
};