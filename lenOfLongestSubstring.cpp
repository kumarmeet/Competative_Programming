int lengthOfLongestSubstring(string s)
{
    int size = s.length();
    if (size == 0)
        return 0;

    int i{0}, j{0};
    vector<int> count(255, 0);
    count[s[0]]++;
    int ans{1};

    while (1)
    {
        if (j == size - 1)
            break;
        if (count[s[j + 1]] == 0)
        {
            j++;
            count[s[j]] = 1;
            ans = max(ans, j - i + 1);//same precedence -, + it will execute left to right
        }
        else
        {
            count[s[i]]--;
            i++;
        }
    }
    return ans;
}
