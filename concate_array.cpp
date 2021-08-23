vector<int> getConcatenation(vector<int>& nums) 
{
  nums.resize(nums.size() * 2);
  size_t mid = nums.size() / 2;

  for (int i = 0, j = mid; i < nums.size() / 2; i++, j++)
      nums[j] = nums[i];

    return nums;
}

vector<int> getConcatenation(vector<int>& nums) 
{
  int n = nums.size();
  for (int i = 0; i < n; i++) 
    nums.push_back(nums[i]);
  return nums;
}

