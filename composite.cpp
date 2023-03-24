#include<iostream>
#include<cmath>
using namespace std;

double o[3][3],t1[3][3],r[3][3];
void matmul()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            r[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                r[i][j] += t1[i][k] * o[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            o[i][j] = r[i][j];
        }
    }
}
void trans(double x, double y)
{

    double t[3][3] = {{1, 0, x}, {0, 1, y}, {0, 0, 1}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            t1[i][j] = t[i][j];
        }
    }
    matmul();
}
void rot(double deg)
{

    double r[3][3] = {{cos(deg), -sin(deg), 0}, {sin(deg), cos(deg), 0}, {0, 0, 1}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            t1[i][j] = r[i][j];
        }
    }
    matmul();
}
void sheary(double y)
{

    double r[3][3] = {{1, y, 0}, {0, 1, 0}, {0, 0, 1}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            t1[i][j] = r[i][j];
        }
    }
    matmul();
}
void shearx(double x)
{

    double r[3][3] = {{1, 0, 0}, {x, 1, 0}, {0, 0, 1}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            t1[i][j] = r[i][j];
        }
    }
    matmul();
}
void scale(double s)
{

    double r[3][3] = {{s, 0, 0}, {0, s, 0}, {0, 0, 1}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            t1[i][j] = r[i][j];
        }
    }
    matmul();
}

void ref(double x,double y)
{

    double r[3][3] = {{x, 0, 0}, {0, y, 0}, {0, 0, 1}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            t1[i][j] = r[i][j];
        }
    }
    matmul();
}


int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> o[0][i] >> o[1][i];
    }
    o[2][0] = 1;
    o[2][1] = 1;
    o[2][2] = 1;
    for (int i = 0; i < n;i++)
    {
        cout << o[0][i] <<" "<<o[1][i] <<" "<<o[2][i]<<endl;
    }

    int ch;
    int k;
    cin >> k;
    double x, y,deg,s;
    while (k--)
    {
    cin >> ch;
    switch(ch)
    {
        case 1:
        cin >> x >> y;
        trans(x, y);
        break;
        case 2:
        cin >> deg;
        deg=(deg*3.14)/180;
        rot(deg);
        break;
        case 3:
        cin >> x >> y;
        if(x==0)
                sheary(y);
        else
                shearx(x);
        break;
        case 4:
        cin >> s;
        scale(s);
        case 5:
        cin >> x >> y;
        ref(x, y);
        break;
        }
    cout << "After transformation" << endl;
    for (int i = 0; i < n;i++)
    {
        cout << o[0][i] <<" "<<o[1][i] <<" "<<o[2][i]<<endl;
    }
    }
}