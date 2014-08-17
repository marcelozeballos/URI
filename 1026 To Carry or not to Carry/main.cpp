#include <cstdio>
using namespace std;

int main()
{
    long long a, b, result;
    while(scanf("%lld %lld", &a, &b) != EOF)
    {
        result = a ^ b;
        printf("%lld\n", result);
    }
    return 0;
}
