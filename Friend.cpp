#include<iostream>
#include<string>
using namespace std;
int main()
{
    int m, n, l, z = 0;
    string k;
    cin >> n >> m>>l;
    cin >> k;
    if(k[0]=='0')
        z = 1;
    int x = stoi(k);
    //cout<< x << endl;
    int temp = x;
    int s = 0;
    while (temp>0)
    {
        int r = temp % 10;
        temp = temp / 10;
        s = s*10 + r;
    }
    int f = 1,c=0;
    // while (s > 0)
    // {
    //     int r = s % 10;
    //     s = s / 10;
    //     if(r%2==0&&f==0)
    //     {
    //         c=1;
    //     }
    //     if(f>=1)
    //     {
    //         if(f>=m)
    //         {
    //             ans++;
    //             if(r%)
    //         }
    //     }
    //     f++;
    // }
    while(s>0)
    {
        int r = s % 10;
        s = s / 10;
        if(r%2!=0&&f!=n)
        {
            c++;
        }
        f++;
    }
    cout << c/m << endl;
}