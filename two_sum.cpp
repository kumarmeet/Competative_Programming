#include <bits/stdc++.h>

using namespace std;
vector<int> twoSum(vector<int>&, int);

int main()
{
    vector<int> nums {2,7,11,15};
    vector<int> result = twoSum(nums, 9);
    for(int i = 0; i < result.size(); i++)
        cout<<result.at(i)<<" ";
    return 0;
}

vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> return_size;
    int flag{0};

    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i + 1; j < nums.size(); j++)
        {
            if(nums.at(i) + nums.at(j) == target)
            {
                flag = 1;
                return_size.push_back(i);
                return_size.push_back(j);
                break;
            }
        }
        if(flag)
            break;
    }
    return return_size;
}

// using hasing 

vector<int> twoSum(vector<int>& nums, int target) {
     vector<int> return_size;
    int two = 2;
    int hash_i[2][nums.size()] {0};

    for(int key = 0, value = 0; key < nums.size();)
    {
        hash_i[0][key++] = nums.at(key);
        hash_i[1][value] = value;
        value++;
    }

    int flag{0};

    for(int i = 1; i < nums.size(); i++)
    {
      if(target - hash_i[0][flag] == nums.at(i))
      {
        return_size.push_back(hash_i[1][flag]);
        return_size.push_back(hash_i[1][i]);
        break;
      }
      flag++;
    }

    return return_size;
    } // O(1)

