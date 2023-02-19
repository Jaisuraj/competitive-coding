#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

int main()
{
    fast;
    // ll t;
    // cin >> t;
    // while(t--)
    // {
    //     ll Red = 0,Blue = 0,n;
    //     string r,b;
    //     cin>>n>>r>>b;
    //     for(ll i=0; i<n; i++){
    //         if(r[i] > b[i])Red++;
    //         else if(r[i] < b[i])Blue++;
    //     }
    //     if(Red == Blue){
    //         cout<<"EQUAL\n";
    //     }
    //     else if(Red > Blue){
    //         cout<<"RED\n";
    //     }
    //     else{
    //         cout<<"BLUE\n";
    //     }

    // }
    std:: vector<int> *v1 = new std::vector<int>({1,2,3});
std:: vector<int> *v2;
v2=v1;
v1->push_back(4);
v2->push_back(5);
ll s= v2->size();
for (ll i = 0; i < s;i++)
{
    cout << v2<<" ";
}
printf("1/2 = %f",(float)(1/2));
}