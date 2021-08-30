void moveZeroes(vector<int>& nums) 
{
  vector<int> temp;

  for(auto &x: nums)
    if(x != 0)
      temp.push_back(x);
  
  for(auto &x: nums)
    if(x == 0)
      temp.push_back(x);

  for (int i = 0; i < temp.size(); i++)
    nums[i] = temp[i];
}
