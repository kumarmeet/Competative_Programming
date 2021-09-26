bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        bool hasDuplicate = false;
        
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] == nums[i + 1])
            {
                hasDuplicate = true;
                break;
            }
        }
        
        if(hasDuplicate)
            return true;
        return false;
    }
