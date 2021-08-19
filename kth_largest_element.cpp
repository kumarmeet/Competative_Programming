#include <bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) 
{
    sort(nums.begin(), nums.end(), greater<int>());
    return nums[k - 1];
}

int main(){
    vector<int> v{3, 2, 1, 5, 6, 4};
    int find = findKthLargest(v, 2);
    return 0;
}
