#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include<unordered_map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector< pair<char,int> > v;
        int a=-1;
        for(int i=0; i<s.size(); i++)
        {
            if(a==-1 || s[i]!=v[a].first)
            {
                v.push_back({s[i],1});
                a++;
            }
            else
                v[a].second++;
        }
        int size=INT_MAX;
        for(int i=1; i<a; i++)
        {
            if(v[i-1].first!=v[i+1].first)
                size=min(size,v[i].second+2);
        }
        if(size==INT_MAX)
            cout<<0<<endl;
        else
            cout<<size<<endl;
    }
}