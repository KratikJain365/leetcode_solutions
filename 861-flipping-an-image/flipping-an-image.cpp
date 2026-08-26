class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        for(int i = 0; i < image.size(); i++) {

            // reverse row
            reverse(image[i].begin(), image[i].end());

            // invert 0 <-> 1
            for(int j = 0; j < image[i].size(); j++) {
                image[i][j] = 1 - image[i][j];
            }
        }

        return image;
    }
};