class Solution {
public:
int diagonalSum(vector<vector<int>>& mat) {
      int sum{0};
    for (int i = 0; i < mat.size(); i++)
        for (int j = i; j <= i; j++)
            sum += mat[i][j];

    for (int i = mat.size() - 1, j = 0; i >= 0; i--)
            sum += mat[j++][i];

    if(mat.size() % 2 == 1) //if matrix size is odd
        sum = sum - mat[mat.size() / 2][mat.size() / 2];

    return sum;
}
};
