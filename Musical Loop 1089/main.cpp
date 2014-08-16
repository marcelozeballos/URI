#include <cstdio>
using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n), n != 0)
    {
        int vec[n], cnt =0;
        for(int i =0; i < n; i++)
            scanf("%d", &vec[i]);

        if(vec[0] > vec[1] && vec[0] > vec[n-1])
            cnt++;
        if(vec[n-1] > vec[n-2] && vec[n-1] > vec[0])
            cnt++;
        if(vec[n-1] < vec[n-2] && vec[n-1] < vec[0])
            cnt++;
        if(vec[0] < vec[1] && vec[0] < vec[n-1])
            cnt++;
        if(n > 2){
            for(int i =1; i < n; i++){
                if(vec[i] > vec[i-1] && vec[i] > vec[i+1])
                    cnt++;
                if(vec[i] < vec[i-1] && vec[i] < vec[i+1])
                    cnt++;
            }
        }

        printf("%d\n", cnt);
    }
    return 0;
}
