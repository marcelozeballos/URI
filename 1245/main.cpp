#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    int cases;
    while(scanf("%d", &cases) != EOF)
    {
        int r[61], l[61], sum =0, aux;
        memset(r, 0, sizeof(r));
        memset(l, 0, sizeof(l));
        char helper;

        while(cases--){
            scanf("%d %c", &aux, &helper);
            if(helper == 'D')
                r[aux]++;
            if(helper == 'E')
                l[aux]++;
        }

        for(int i =30; i < 61; i++)
            sum += min(r[i], l[i]);

        printf("%d\n", sum);
    }
    return 0;
}
