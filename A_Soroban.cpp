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
    ll n;
    cin >> n;
    if(n==0)cout << "O-|-OOOO";
    while (n > 0)
    {
        ll r;
        r = (ll)n % 10;
        n =(ll) n / 10;
        switch(r)
            {
                case 0:
                    cout << "O-|-OOOO";
                    break;
                case 1:
                    cout << "O-|O-OOO";
                    break;
                case 2:
                    cout << "O-|OO-OO";
                    break;
                case 3:
                    cout << "O-|OOO-O";
                    break;
                case 4:
                    cout << "O-|OOOO-";
                    break;
                case 5:
                    cout << "-O|-OOOO";
                    break;
                case 6:
                    cout << "-O|O-OOO";
                    break;
                case 7:
                    cout << "-O|OO-OO";
                    break;
                case 8:
                    cout << "-O|OOO-O";
                    break;
                case 9:
                    cout << "-O|OOOO-";
                    break;
                }
            cout << endl;
        }   
    }
