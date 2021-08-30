void rotate(vector<int>& nums, int k) {
        if(k > nums.size())
            k %= nums.size();
        std::rotate(nums.begin(), nums.begin() + nums.size() - k, nums.end());//2nd parameter for rotation
    }
