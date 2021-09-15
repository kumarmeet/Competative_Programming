int longestConsecutive(vector<int>& nums) {

    set<int> num_set(nums.begin(), nums.end());

    int longest = 0;

    for (int num : num_set) {
        if (!num_set.count(num - 1)) {
            int currentNum = num;
            int currentStreak = 1;

            while (num_set.count(currentNum + 1)) {
                currentNum += 1;
                currentStreak += 1;
            }

            longest = max(longest, currentStreak);
        }
    }
    return longest;
}
