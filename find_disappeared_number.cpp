vector<int> findDisappearedNumbers(vector<int> &nums)
{
    int new_size = (nums.size() + 1);

    vector<int> disappeared_num(new_size, 0);

    for (int i = 0; i < nums.size(); i++)
        disappeared_num[nums[i]]++;

    vector<int> found;

    for (int i = 1; i < new_size; i++)
        if (disappeared_num[i] == 0)
            found.push_back(i);

    return found;
}
