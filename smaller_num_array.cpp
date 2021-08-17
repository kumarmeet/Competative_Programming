#include<bits/stdc++.h>
#include<string>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums)
{
    int count{0};
    vector<int> v;

    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = 0; j < nums.size(); j++)
        {
            if(nums.at(i) > nums.at(j))
                count++;
        }
        v.push_back(count);
        count = 0;
    }
    return v;
}

int main()
{
    vector<int> nums {8,1,2,2,3};
    vector<int> v = smallerNumbersThanCurrent(nums);
    return 0;
}
