#include <cmath>
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstdlib>
using namespace std;

int main()
{
    // X(t) = Vcos(a)t
    // Y(t) = Vsen(a)t - Gt²/2

    int r, h, v, g;

    while(cin >> r >> h >> v >> g)
    {
        double angle;
        double t = g/v;
        angle = asin(g/(2*v));

        double x = v*cos(angle)*t;

        if(x >= r)
            cout << "Y\n";
        else
            cout << "N\n";
    }
}
