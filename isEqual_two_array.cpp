#include <bits/stdc++.h>
using namespace std;
bool canBeEqual(vector<int> &target, vector<int> &arr)
{
    bool isEqual{true};
    sort(target.begin(), target.end());
    sort(arr.begin(), arr.end());

    for (int i = 0; i < target.size(); i++)
    {
        if (target[i] != arr[i])
        {
            isEqual = false;
            break;
        }
    }

    return isEqual;
}

int main()
{
    vector<int> v{1, 2, 1, 2, 1, 1, 1, 2, 1};
    int unorder = canBeEqual(v);
    cout << unorder;
    return 0;
}
