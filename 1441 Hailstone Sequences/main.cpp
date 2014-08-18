#include <cstdio>
using namespace std;

int main()
{
    int h;
    while(scanf("%d", &h), h >0)
    {
        int high =h, h1 = 0;
        while(h > 1)
        {
            if(h%2 == 0)
                h1 = 0.5*h;
            if(h%2 != 0)
                h1 = (3*h) +1;
            if(h1 > high)
                high = h1;
            h = h1;
        }
        printf("%d\n", high);
    }
    return 0;
}
