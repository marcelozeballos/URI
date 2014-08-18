#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int suspects;
    while(scanf("%d", &suspects), suspects > 0)
    {
        int vec[suspects], aux[suspects];
        for(int i =0;i < suspects; i++){
            scanf("%d", &vec[i]);
            aux[i] = vec[i];
        }

        sort(vec,vec+suspects);
        for(int i = 0; i < suspects; i++)
        {
            if(vec[suspects-2] == aux[i])
            {
                printf("%d\n", i+1);
                break;
            }
        }
    }
    return 0;
}
