#include<bits/stdc++.h>
#include<string>

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
        {36376,85652,21002,4510},
        {68246,64237,42962,9974}, 
        {32768,97721,47338,5841},
        {55103,18179,79062,46542}
    };

    vector<int> lucky = luckyNumbers(matrix);

    cout << lucky.at(0);
    return 0;
}
