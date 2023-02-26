#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

int n;
vector<int> a;
int check(int x)
{
    if(x==n-1)
        return 1;
    if(a[x]>a[x-1])
        return 1;
    return 0;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int  q;
        cin >> n >> q;
        a.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
            int lo = 0, hi = n - 1,peak=0;
            while (lo <= hi)
            {
                int mid = (lo + hi) / 2;
                if (check(mid))
                {
                    peak = mid;
                    lo = mid + 1;
                }
                else{
                    hi = mid - 1;
                }
            }
        while(q--)
        {
                int k;
                cin >> k;
                vector<int> final;
                lo = 0;
                hi = peak - 1;
                while (lo <= hi)
            {
                int mid = (lo + hi) / 2;
                if (a[mid]==k)
                {
                    final.push_back(mid + 1);
                    break;
                    
                }
                else if(a[mid]>k)
                {
                    hi = mid - 1;
                }
                else{
                    lo = mid +1;
                }
            }
                lo = peak;
                hi = n - 1;
                while (lo <= hi)
            {
                int mid = (lo + hi) / 2;
                if (a[mid]==k)
                {
                    final.push_back(mid + 1);
                    break;
                    
                }
                else if(a[mid]>k)
                {
                    lo = mid + 1;
                }
                else{
                    hi = mid -1;
                }
            }
            for(auto v:final)
            {
                cout << v << " ";
            }
            cout << endl;
        }
    }
}