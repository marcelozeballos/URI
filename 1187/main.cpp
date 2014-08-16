#include <cstdio>
using namespace std;

int main()
{
    int rows =12, columns =12;
    float M[rows][columns], sum =0, cnt =0;

    char T; scanf("%c", &T);

    for(int i =0; i < rows; i++)
        for(int j =0; j < columns; j++)
            scanf("%f", &M[i][j]);

    int start = 1, last = 10, lim = 4;

    for(int i = 0; i < lim; i++)
    {
        for(int j = start; j <= last; j++)
        {
            sum += M[i][j];
            cnt++;
        }
        start++;
        last--;
    }

    if(T == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1f\n", sum/cnt);

    return 0;
}
