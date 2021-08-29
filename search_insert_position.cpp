#include <bits/stdc++.h>

using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    //1 3 5 6  t -> 5
    int low{0};
    int high = (nums.size() - 1);
    int mid{0};

    while (low <= high)
    {
        mid = ((high + low) / 2);
        if (target == nums[mid])
            return mid;
        else if (nums[mid] < target)
            low = mid + 1;
        else if (nums[mid] > target)
            high = mid - 1;
    }
    return low;
}

int searchInsertSTL(vector<int> &nums, int target)
{
    auto low = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    return low;
}

int main()
{
    vector<int> v{1, 3, 5, 6};
    int found = searchInsert(v, 7);
    cout << found;
    return 0;
}
