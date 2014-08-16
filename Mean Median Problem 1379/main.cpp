#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b), a > 0 || b > 0)
    {
        int vec[3];
        vec[0] = max(a,b);
        vec[1] = min(a,b);

        vec[2] = 3*(vec[1]) - vec[1] - vec[0];

        printf("%d\n", vec[2]);
    }
}
