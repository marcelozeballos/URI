#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2), x1 > 0 || y1 > 0 || x2 > 0 || y2 > 0)
    {
        int dx, dy;
        dx = abs(x2-x1);
        dy = abs(y2-y1);

        if(dx == 0 && dy == 0)
            printf("0\n");
        else if(dx > 0 && dy == 0)
            printf("1\n");
        else if(dx == 0 && dy > 0)
            printf("1\n");
        else if(dx == dy)
            printf("1\n");
        else
            printf("2\n");
    }
}
