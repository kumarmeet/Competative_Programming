vector<int> shuffle(vector<int>& nums, int n) 
{
  vector<int> shuff;

  for (int i = 0; i < nums.size() / 2; i++, n++)
  {
    shuff.push_back(nums[i]);
    shuff.push_back(nums[n]);
  }
  return shuff;
}
