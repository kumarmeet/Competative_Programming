#include<bits/stdc++.h>

using namespace std;

int maxProduct(vector<int>& nums) 
{
    sort(nums.begin(), nums.end());
    int max = ((nums[nums.size() - 1] - 1) * (nums[nums.size() - 2] - 1));
    return max;
}

int main()
{
    vector<int> nums{1,5,4,5};

    int maximum = maxProduct(nums);

    cout << maximum;
    return 0;
}
