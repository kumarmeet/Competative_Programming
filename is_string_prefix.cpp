#include<bits/stdc++.h>
#include<string>
using namespace std;

bool isPrefixString(string s, vector<string>& words) {
    string r;   
    for(auto x:words)
    {
        r += x;
        if(r==s)
            return true;
    }
    return false;
}


int main()
{
    string s = "iloveleetcode";
    vector<string> words{"i","love","leetcode","apples"};

    if(isPrefixString(s,words))
        cout << "true";
    return 0;
}
