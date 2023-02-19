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
#define pb push_back
#define mem(name, value) memset(name, value, sizeof(name))
#define all(v) (v).begin(), (v).end()
#define rev(v) reverse(all(v))

int main()
{
    int n, len, i, j, used[200];
    string temp;
    cin >> n >> len;

    vector <string> vc,fir,lef;

    for(i=1;i<=n;i++){
        cin >> temp;
        vc.pb(temp);
    }

    mem(used,0);

    for(i=0;i<n;i++){
        temp=vc[i];
        reverse(all(temp));
        for(j=0; j<n;j++){
            if(i!=j && temp==vc[j] && used[j]==0){
                used[i]=used[j]=1;
                fir.pb(vc[i]);
                lef.pb(vc[j]);
            }
        }
    }

    for(i=0;i<n;i++){
        if(used[i]==0){
            temp=vc[i];
            reverse(all(temp));
            if(temp==vc[i]){
                fir.pb(vc[i]);
                break;
            }
        }
    }
    string ans="";

    for(i=0;i<fir.size();i++){
        ans+=fir[i];
    }
    for(i=lef.size()-1;i>=0;i--){
        ans+=lef[i];
    }
    cout << ans.size() << endl;
    if(ans.size()){
        cout << ans << endl;
    }
}