#include <bits/stdc++.h>

using namespace std;

vector<int> buildArray(vector<int> &nums)
{
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
        ans.push_back(nums[nums[i]]);

    return ans;
}

int main()
{
    vector<int> arr{0, 1, 2, 5, 3, 4};
    vector<int> ans = buildArray(arr);
    return 0;
}
