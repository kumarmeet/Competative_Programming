#include<bits/stdc++.h>
#include<string>

using namespace std;

string longestCommonPrefix(vector<string>& strs)
{
    string common = strs[0];
    int i,j;
    for(i = 1; i < strs.size() && common != ""; ++i)
    {
        for(j = 0; j < strs[i].length(); ++j)
        {
            if(common[j] != strs[i][j])
                break;
        }
        common = common.substr(0,j);
    }
    return common;
}

int main()
{
    vector<string> str{"flower","flow","flight"};
    string s = longestCommonPrefix(str);
    cout << s;
    return 0;
}
