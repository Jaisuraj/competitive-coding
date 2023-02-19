#include<iostream>
using namespace std;
#define ll long long
void  solve()
{
    ll o, z, no = 0, nz = 0, i, flag = 0,c,c1;
    ;
    cin >> z >> o;
    c = o, c1 = z;
    for (i = 0; i < o + z; i++)
    {
        c = c - 2;
        c1 = c1 - 1;
        if(c1==0)
        {
            if(c>2)
            {
                flag = 1;
            }
        }
    }

        if (flag==0)
        {
            for (i = 0; o != 0 || z != 0; i++)
            {
                no = 0, nz = 0;
                if (o != z)
                {
                    if (o != 0)
                    {
                        while (no < 2)
                        {
                            cout << "1";
                            o--;
                            no++;
                            if (o == 0 || o == z)
                                break;
                        }
                    }
                    if (z != 0)
                    {
                        while (nz < 1)
                        {
                            cout << "0";
                            z--;
                            nz++;
                        }
                    }
                }
                else
                {
                    while (o/2 > 0)
                    {
                        cout << "10";
                        o = o-2;
                    }
                    while (z/2 > 0)
                    {
                        cout << "10";
                        z = -2;
                    }
                }
            }
        }
        else
        {
            cout << "-1";
        }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}