#include<bits/stdc++.h>
#include<limits>

using namespace std;

vector<int> luckyNumbers (vector<vector<int>>& matrix) 
{
    vector<int> lucky;
    int min = INT16_MAX, max = INT16_MIN, pos = 0, i, j, k;

    for(k = 0; k < matrix.size(); k++)
    {
        for(i = 0; i < matrix[0].size(); i++)
        {
            if(matrix[k][i] < min)
            {
                min = matrix[k][i];
                pos = i;
            }
        }

        for(j = 0; j < matrix.size(); j++)
        {
            if(matrix[j][pos] > max)
                max = matrix[j][pos];
        }

        if(min == max)
            lucky.push_back(min);

        min = INT16_MAX;
        max = INT16_MIN;
    }

    return lucky;
}

int main()
{
    vector<vector <int>> matrix 
    {
        {1, 10, 4, 2},
        {9,  3, 8, 7}, 
        {15,16,17,12}
    };

    vector<int> lucky = luckyNumbers(matrix);

    cout << lucky.at(0);
    return 0;
}
