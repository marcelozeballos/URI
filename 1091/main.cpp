#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int cases, borderX, borderY;
    while(scanf("%d", &cases), cases != 0)
    {
        scanf("%d %d", &borderX, &borderY);
        while(cases--)
        {
            int x, y; scanf("%d %d", &x, &y);
            if(x == borderX || y == borderY)
                printf("divisa\n");
            if(x != borderX && y != borderY){
                if(x > borderX && y > borderY)
                    printf("NE\n");
                if(x < borderX && y > borderY)
                    printf("NO\n");
                if(x > borderX && y < borderY)
                    printf("SE\n");
                if(x < borderX && y < borderY)
                    printf("SO\n");
            }
        }
    }
    return 0;
}
