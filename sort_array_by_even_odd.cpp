#include <bits/stdc++.h>
using namespace std;
vector<int> sortArrayByParity(vector<int> &nums)
{
    vector<int> sorted(nums.size());
    int i{0}, j = (nums.size() - 1);

    for(int k = 0; k < nums.size(); k++)
        if(nums[k] % 2 == 0)
            sorted[i++] = nums[k];
        else
            sorted[j--] = nums[k];
    return sorted;
}

int main()
{
    vector<int> v = {2,3,6,5,4,7,88,9,5,1,22};
    vector<int> n = sortArrayByParity(v);

    for (int i = 0; i < n.size(); i++)
        cout << n.at(i) << " ";
    return 0;
}
