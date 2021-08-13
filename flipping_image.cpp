class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int j = 0; j < image.at(0).size(); j++)
            reverse(image[j].begin(), image[j].end());

        for (int i = 0; i < image.size(); i++)
            for (int j = 0; j < image.at(0).size(); j++){
                    if (image.at(i).at(j) == 0)
                        image[i][j] = 1;
                    else
                        image[i][j] = 0;
                }

      return image;
  }
};
