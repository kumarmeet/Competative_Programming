#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int>& nums)
    {
        int count{0};
        vector<int> sum(nums.size());

        for(int i = 0; i < nums.size(); i++)
        {
            count += nums.at(i);
            sum[i] = count;
        }
        return sum;
    }
};

int main()
{
    vector<int> v{1,1,1,1,1};
    Solution s;
    vector<int> sum = s.runningSum(v);
    return 0;
}
