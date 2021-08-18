#include<bits/stdc++.h>

using namespace std;

int maxProductDifference(vector<int>& nums) 
{
    sort(nums.begin(), nums.end());
    int max = (nums[nums.size() - 1] * nums[nums.size() - 2]) - (nums[0] * nums[1]);
    return max;
}

int main()
{
    vector<int> nums{5, 6, 2, 7, 4};

    int maximum = maxProductDifference(nums);

    cout << maximum;
    return 0;
}
