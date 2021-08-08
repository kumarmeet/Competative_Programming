#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        vector<int> count(3, 0);

        for (int i = 0; i < nums.size(); i++)
            count[nums[i]]++;
        //count
        // 0 1 2
        // 2 2 2
        int k = 0;
        nums.clear();

        for (int i = 0; i < count.size(); i++)
        {
            while (count.at(k) > 0)
            {
                nums.push_back(k);
                count[k]--;
            }
            k++;
        }
    }
};

int main()
{
    Solution sol;
    vector<int> v{2, 0, 2, 1, 1, 0};
    sol.sortColors(v);

    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";
    return 0;
}
