#include <bits/stdc++.h>

using namespace std;

int missingNumber(vector<int> &);

int main()
{
    vector<int> v{9, 6, 4, 2, 3, 5, 7, 0, 1};
    int missing_number = missingNumber(v);
    cout << missing_number;
    return 0;
}

int missingNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int size = (nums.size() + 1);
    vector<int> hash_table(size, -1);

    for (int i = 0; i < nums.size(); i++)
        hash_table[nums.at(i)] = nums.at(i);

    for (int i = 0; i < hash_table.size(); i++)
        if (hash_table.at(i) == -1)
            return i;
    return -1;
}
