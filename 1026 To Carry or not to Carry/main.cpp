#include <cstdio>
using namespace std;

int main()
{
    int a, b, result;
    while(scanf("%d %d", &a, &b) != EOF)
    {
        result = a ^ b;
        printf("%d\n", result);
    }
    return 0;
}
