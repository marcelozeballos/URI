//MUSICAL LOOP
//CHECK FOR PEAKS (MIN AND MAX) IN A CIRCULAR ARRAY
\

#include <cstdio>
using namespace std;

int main()
{
    int len;
    while(scanf("%d", &len), len > 0)
    {
        int loop[len], cnt = 0;

        for(int i = 0; i < len; i++)
            scanf("%d", &loop[i]);

        if((loop[0] > loop[len-1] && loop[0] > loop[1]) || (loop[0] < loop[len-1] && loop[0] < loop[1]))
           cnt++;
        if((loop[len-1] > loop[len-2] && loop[len-1] > loop[0]) || (loop[len-1] < loop[len-2] && loop[len-1] < loop[0]))
            cnt++;

        for(int i = 1;i < len-1; i++)
            if((loop[i] > loop[i+1] && loop[i] > loop[i-1]) || (loop[i] < loop[i+1] && loop[i] < loop[i-1]))
                cnt++;

        printf("%d\n", cnt);
    }
    return 0;
}
