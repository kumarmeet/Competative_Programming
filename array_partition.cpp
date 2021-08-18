#include <bits/stdc++.h>
using namespace std;
//1 4 3 2
int arrayPairSum(vector<int> &nums)
{
    int max{0}, mini{0};

    sort(nums.begin(), nums.end()); //1 2 3 4

    for (int i = 0; i < nums.size(); i++)
    {
        mini = min(nums[i], nums[i++]);
        max += mini;
    }

    return max;
}

int main()
{
    vector<int> v{6, 2, 6, 5, 1, 2};
    int max = arrayPairSum(v);
    return 0;
}
