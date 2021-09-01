#include<bits/stdc++.h>

using namespace std;

vector<int> countBits ( int n )
{
    vector<int> count ( n+1 );
    count[0] = 0;

    for ( int i = 1; i <= n; i++ )
        count[i] = count[i / 2] + ( i % 2 );

    return count;
}

int main()
{
    vector<int> r = countBits(5);
    for(auto &e:r)
        cout<<e<<" ";
    
