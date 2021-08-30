 vector<int> sortedSquares(vector<int>& nums) {
    vector<int> result;
        for(auto &n:nums)
        result.push_back(n * n);
    sort(result.begin(), result.end());
        return result;
    }
