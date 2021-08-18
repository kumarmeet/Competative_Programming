#include<bits/stdc++.h>
#include<string>

using namespace std;

vector<int> luckyNumbers (vector<vector<int>>& matrix) 
{
    for (int i = 0; i < matrix.size(); i++)
        sort(matrix[i].begin(), matrix[i].end());

    vector<int> v;
    int max = matrix[0][0];

    for (int i = 0; i < matrix.size(); i++)
    {
        if(max < matrix[i].at(0))
            max = matrix[i].at(0);
    }

    v.push_back(max);

    return v;
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
