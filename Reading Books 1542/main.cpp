#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int old, days, now;
    while(scanf("%d", &old), old > 0)
    {
        scanf("%d %d", &days, &now);
        int f = abs((old*days)/(old-now));
        f = f *now;
        if(f == 1)
            printf("%d pagina\n", f);
        else
            printf("%d paginas\n", f);
    }
}
