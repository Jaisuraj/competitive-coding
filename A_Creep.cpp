#include<iostream>
#include <map>
#include <stack>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

int main()
{
    fast;
    int n,a, b;
    char z = '0';
    char o = '1';
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> a >> b;
        if(a==b)
        {
            while(a--)
            {
                cout << o << z;
            }
            cout << endl;
        }
        else
        {   
            if(a-b>0)
            {
                int d = a - b;
                while(b--)
                {
                    cout << z;
                    cout << o;
                }
                while(d--)
                {
                    cout << z;
                }
            }
            else
            {
                int d = b-a;
                while(a--)
                {
                    cout << o;
                    cout << z;
                }
                while(d--)
                {
                    cout << o;
                }
            }
            cout << endl;
        }
    }
}