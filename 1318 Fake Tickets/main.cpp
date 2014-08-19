#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int att, tic;
    while(scanf("%d %d", &att, &tic), att > 0 || tic > 0)
    {
        int vec[tic], cnt =0, aux = -1;
        for(int i =0;i <tic; i++)
            scanf("%d", &vec[i]);

        sort(vec,vec+tic);

        for(int i = 0; i < tic; i++)
        {
            if(vec[i] == vec[i+1] && vec[i] != aux)
            {
                aux = vec[i];
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
