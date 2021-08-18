#include<bits/stdc++.h>
#include<string>

using namespace std;

vector<int> luckyNumbers (vector<vector<int>>& matrix) 
{
    vector<int> lucky;
    int min=99999, max=0, pos=0, i, j, k;

    int m = matrix.size();
    int n = matrix[0].size();

    for(k = 0; k < m; k++)
    {
        for(i = 0; i < n; i++)
        {
            if(matrix[k][i] < min)
            {
                min = matrix[k][i];
                pos = i;
            }
        }

        for(j = 0; j < m; j++)
        {
            if(matrix[j][pos] > max)
                max = matrix[j][pos];
        }

        if(min == max)
            lucky.push_back(min);

        min = 999999;
        max = 0;
    }

    return lucky;
}
int main()
{
    vector<vector <int>> matrix 
    {
        {36376,85652,21002,4510},
        {68246,64237,42962,9974}, 
        {32768,97721,47338,5841},
        {55103,18179,79062,46542}
    };

    vector<int> lucky = luckyNumbers(matrix);

    cout << lucky.at(0);
    return 0;
}
