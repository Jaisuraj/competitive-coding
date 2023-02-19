#include<iostream>
#include <map>
#include <vector>
#include <set>
#include<cstring>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

int main()
{
    fast;
    int i, j, k;
    int n, m, q;
    string s;

    cin >> s;

    n = s.length();
    for(i = 0; i < n; i++)
    {
        if(i + 2 < n && s[i] == s[i + 1] && s[i + 1] == s[i + 2])
            s[i] = '#';


        else if(i + 3 < n && s[i] == s[i + 1] && s[i + 2] == s[i + 3])
        {
            for(j = i + 3; j < n; j++)
            {
                if(s[j] == s[i + 2])
                    s[j] = '#';
                else
                {
                    i =  j - 1;
                    break;
                }
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        if(s[i] != '#')
            cout << s[i];
    }
}