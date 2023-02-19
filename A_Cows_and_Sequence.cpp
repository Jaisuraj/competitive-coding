#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<set>
#include<unordered_set>
using namespace std;
double a[200005], sum, x;
int d, n, k, op;
int main () 
{
    scanf("%d", &n);
    k = 1; a[1] = 0.0; sum = 0.0;
    while(--n >= 0) 
    {
        scanf("%d", &op);
        if(op == 1) 
        {
            scanf("%d %lf", &d, &x);
            a[d] += x;
            sum += (d * x);
        }
        else if(op == 2)
        {
            scanf("%lf", &x);
            k++;
            a[k - 1] -= x;
            a[k] = x;
            sum += x;
        }
        else if(op == 3)
        {
            a[k - 1] += a[k];
            sum -= a[k];
            a[k] = 0;
            k--;
        }
        printf("%.6lf\n", sum / k);
    }
    return 0;
}