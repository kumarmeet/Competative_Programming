class Solution
{
public:
    bool isPalindrome(int x)
    {
        int rem, temp;
        long long int paldrm{0};
        temp = x;

        while (x)
        {
            rem = x % 10; //121 % 10
            paldrm = (paldrm * 10) + rem;
            x = x / 10; // 121 / 10
        }

        if (temp == paldrm && paldrm > -1)
            return true;
        return false;
    }
};

int main()
{

    Solution s1;

    if (s1.isPalindrome(1234567899))
        cout << "Is palindrome";
    else
        cout << "Is not palindrome";
    return 0;
}
