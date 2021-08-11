#include <bits/stdc++.h>

using namespace std;

int countNegatives(vector<vector<int>> &);

int main()
{
    vector<vector<int>> grid{{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}};
    cout << countNegatives(grid);
    return 0;
}

int countNegatives(vector<vector<int>> &grid)
{
    vector<int> v;
    for (int i = 0; i < grid.size(); i++)
        for (int j = 0; j < grid[0].size(); j++)
            v.push_back(grid.at(i).at(j));

    sort(v.begin(), v.end());
    int count = 0;

    for (int i = 0; i < v.size(); i++)
        if (v.at(i) < 0)
            count++;
        else
            return count;
    return 0;
}
