#include <cstdio>
using namespace std;

int main()
{
    int rows = 12, columns =12;
    float M[rows][columns], sum =0, cnt =0;

    char T; scanf("%c", &T);

    for(int i =0; i < rows; i++)
        for(int j =0; j < columns; j++)
            scanf("%f", &M[i][j]);

    int start =11;
    for(int i =1; i < 12, start > 0; i++){
        for(int j = start; j < 12; j++){
            sum += M[i][j];
            cnt++;
        }
        start--;
    }

    if(T == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1f\n", sum/cnt);

    return 0;
}
