#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
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
    string s1, s2, s3;
    cin>>s1>>s2>>s3;
    string k = s1 + s2;
    sort(k.begin(), k.end());
    sort(s3.begin(), s3.end());
    if(k==s3)
        cout << "YES" << endl;
    else
        cout << "NO"<<endl;
}