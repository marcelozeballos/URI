#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int a;
    while(scanf("%d", &a) != EOF)
    {
        int aux = sqrt(a), b;
        bool control = false;
        for(int i = 1; i <= aux; i++)
        {
            for(int j = 1; j <= aux; j++)
            {
                b = j*j + i*i;
                if(b == a){
                    control = true;
                    break;
                }
            }
            if(control)
                break;
        }
        if(control)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
