#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int cases; scanf("%d", &cases);
    while(cases--)
    {
        int n, secret; scanf("%d %d", &n, &secret);
        int vec[n], diff[n], position[n];

        for(int i =0; i < n; i++){
            scanf("%d", &vec[i]);
            diff[i] = abs(secret-vec[i]);
            position[i] = diff[i];
        }

        for(int i=0; i < n; i++)
            for(int j = i+1; j < n; j++)
                if(diff[i] > diff[j])
                    swap(diff[i], diff[j]);

        for(int i =0; i < n; i++){
            if(vec[i] == secret){
                printf("%d\n", i+1);
                break;
            }
        }

        for(int i=0; i < n; i++){
            if(diff[0] == position[i] && vec[i] != secret){
                printf("%d\n", i+1);
                break;
            }
        }
    }
    return 0;
}
