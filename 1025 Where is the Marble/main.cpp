#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int cases = 1, marbles, queries;

    while(scanf("%d %d", &marbles, &queries), marbles > 0 || queries > 0)
    {
        int vec[marbles];

        for(int i =0; i < marbles; i++)
            scanf("%d", &vec[i]);

        sort(vec,vec+marbles);
        int aux[queries];

        for(int i =0; i < queries; i++)
            scanf("%d", &aux[i]);

        printf("CASE # %d:\n", cases);

        for(int i =0; i < queries; i++)
        {
            if(binary_search(vec,vec+marbles,aux[i]))
            {
                int* pos = lower_bound(vec, vec+marbles, aux[i]);
                if(marbles%2 == 0)
                    printf("%d found at %d\n", aux[i], *pos-1);
                else
                    printf("%d found at %d\n", aux[i], *pos);
            }
            else
                printf("%d not found\n", aux[i]);
        }
        cases++;
    }
    return 0;
}
