#include<bits/stdc++.h>
#include<string>

using namespace std;

bool isValid(string s)
{
    stack<char> st;
    int i{0};

    if(s.length() % 2 == 1)
        return false;

    while(s[i])
    {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            st.push(s[i]);
        else if(!st.empty())
        {
            if(s[i] == ')' && st.top() == '(')
                st.pop();
            else if(s[i] == ']' && st.top() == '[')
                st.pop();
            else if(s[i] == '}' && st.top() == '{')
                st.pop();
            else
                break;
        }
        else
            st.push(s[i]);
        i++;
    }
    if(st.empty())
        return true;
    else
        return false;
}

int main()
{
    string s = "))";
    if(isValid(s))
        cout<<"True";
    else
        cout<<"False";
    return 0;
}
