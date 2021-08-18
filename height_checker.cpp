#include <bits/stdc++.h>
using namespace std;
int heightChecker(vector<int> &heights)
{
    int order{0};
    vector<int> check = heights;
    sort(check.begin(), check.end());

    for (int i = 0; i < check.size(); i++)
    {
        //heights -> 1 2 1 2 1 1 1 2 1
        //check ->   1 1 1 1 1 1 2 2 2
        if (check[i] != heights[i])
            order++;
    }
    return order;
}

int main()
{
    vector<int> v{1, 2, 1, 2, 1, 1, 1, 2, 1};
    int unorder = heightChecker(v);
    cout << unorder;
    return 0;
}
