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

bool isFactorial(ll n)
{
  for (ll i = 1;; i++) {
    if (n % i == 0) {
      n /= i;
    }
    else {
      break;
    }
  }
 
  if (n == 1) {
    return true;
  }
  else {
    return false;
  }
}
bool istwo(ll n)
{
    if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,ans=1,f=0;
        cin >> n;
        ll temp = n;
        while(1)
        {
        if(istwo(temp)||istwo(temp+f))
        {
            break;
        }
        else if (isFactorial(temp)||isFactorial(temp+f))
        {
            break;
        }
        else if(temp%2==0||(temp+f)%2==0)
        {
            if((temp+f)%2!=0&&f!=0)ans = ans + 1;
            temp = temp / 2;
            while(1)
            {
            if(isFactorial(temp)==1)
            {
                temp = temp / 2;
                ans = ans + 1; 
            }
            else{
                break;
            }
            }
        }
        else 
        {
            temp--;
            ans = ans + 1;
            f++;
            //cout << f << " " << temp <<" "<<ans<< endl;
        }
        }
        cout << ans << endl;
    }
}