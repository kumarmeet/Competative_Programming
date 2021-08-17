#include<bits/stdc++.h>
#include<string>

using namespace std;

string sortSentence(string s)
{
    string str;
    int j{0};
    char k;
    int string_size{1};

    for(int i = 0; s[i]; i++)
        if(s[i] == ' ')
            string_size++;

    vector<string> v(string_size);

    reverse(s.begin(), s.end());

    for(int i = 0; i < v.size(); i++)
    {
        while(s[j])
        {
            k = i + 1; //converting int to char
            if(s[j] == (k + '0'))
            {
                s[j] = '*';//tag, don't repeat itself
                j++;
                while(s[j] != ' ' && s[j] != '\0')
                {
                    v[i].push_back(s[j++]);
                }
                break;
            }
            j++;
        }
        j = 0;
    }

    for(int i = 0; i < v.size(); i++)
    {
        reverse(v[i].begin(), v[i].end());

        if(i == v.size() - 1) //skip string's last space character 
            str += v[i];
        else
            str += v[i] + " ";
    }

    return str;
}

int main()
{
    string s = "Myself2 Me1 I4 and3";
    string str = sortSentence(s);

    cout<<str;
    return 0;
}
