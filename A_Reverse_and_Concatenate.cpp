#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<set>
#include<unordered_set>
using namespace std;

typedef long long int ll ;
typedef double lld;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

bool ispalin(string s)
{
    ll n=s.length();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        return false;   
    }
    return true;
}
void asquare()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k==0)cout<<"1\n";
    else if(ispalin(s))
    cout<<"1\n";
    else cout<<"2\n";
} 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        asquare();
    }
    return 0;
}
