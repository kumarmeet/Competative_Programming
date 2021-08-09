#include<bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int>&);

int main()
{
    vector<int> v{-2,1,-3,4,-1,2,1,-5,4};
    int sum = maxSubArray(v);
    cout<<sum;
    return 0;
}
int maxSubArray(vector<int>& nums)
{
    int ans=nums[0];
    int sum=0;
    for(int i=0; i < nums.size(); i++)
    {
        sum+=nums[i];
        ans=max(ans,sum);
        sum=max(sum,0);
    }
    return ans;
}
