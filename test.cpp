#include<iostream>
#include<vector>
using namespace std;

int ProcessArray(vector<int> &a, int n)
{
    int c = 0,j=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<100)
        {
            c = 0;
        }
        else if(a[i]>=100)
        {
            if(c==0)
            {
                c++;
            }
            else{
                a.erase(a.begin() + i);
                i--;
                n--;
                c++;
            }
        }
    }
    return a.size();
}

int main()
{
    int x, i = 0;
    vector<int> a;
    while (1)
    {
        cin >> x;
        if(x<0)
            break;
        else{
            a.push_back(x);
            i++;
        }
    }
    int j=ProcessArray(a,i-1);
    for (int l = 0; l < j; l++)
    {
        cout << a[l] << endl;
    }
}
