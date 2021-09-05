#include <bits/stdc++.h>

using namespace std;

bool smallVowel(char ch);
bool capitalVowel(char ch);

string reverseVowels(string s)
{
    int size = (s.length() - 1);

    int i{0}, j{size};
    if (size == 0)
        return s;

    while (i < j)
    {
        if (smallVowel(s[i]) && capitalVowel(s[i]))
            i++;

        if (smallVowel(s[j]) && capitalVowel(s[j]))
            j--;

        if ((!smallVowel(s[i]) || !capitalVowel(s[i])) && (!smallVowel(s[j]) || !capitalVowel(s[j])))
            swap(s[i++], s[j--]);
    }
    return s;
}

bool smallVowel(char ch)
{
    if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
        return true;
    return false;
}

bool capitalVowel(char ch)
{
    if (ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
        return true;
    return false;
}

int main()
{
    string str = reverseVowels("leetcode");
    cout << str;
    return 0;
}
