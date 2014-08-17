#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int a, d;
    while(scanf("%d %d", &a, &d), a > 0 || d > 0)
    {
        int attack[a], defense[d];

        for(int i =0; i < a; i++)
            scanf("%d", &attack[i]);
        for(int i =0; i <d; i++)
            scanf("%d", &defense[i]);

        sort(defense, defense+d);

        bool offside = false;
        for(int i =0; i < a; i++)
        {
            if(attack[i] >= defense[1] || (attack[i] == defense[0] && attack[i] == defense[1]))
                offside = false;
            else{
                offside = true;
                break;
            }
        }

        if(offside)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
