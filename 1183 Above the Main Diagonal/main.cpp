#include <cstdio>
using namespace std;

int main()
{
    char T; scanf("%c", &T);
    int rows =12, columns =12, cnt =0;
    float M[rows][columns], sum =0;

    for(int i =0; i < rows; i++)
        for(int j =0; j < columns; j++)
            scanf("%f", &M[i][j]);

    for(int i =0; i < 11; i++){
        for(int j = i+1; j < 12; j++){
            sum += M[i][j];
            cnt++;
        }
    }
    if(T == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1f\n", sum/cnt);
}
