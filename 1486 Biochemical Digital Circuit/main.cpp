#include <cstdio>
using namespace std;

int main()
{
    int col, row, len;

    while(scanf("%d %d %d", &col, &row, &len), col > 0 || row > 0 || len > 0)
    {
        int M[row][col], cnt =0;

        for(int i = 0; i < row; i++)
            for(int j = 0; j < col; j++)
                scanf("%d", &M[i][j]);

        for(int i = 0; i < col; i++)
        {
            int cntaux =0;
            bool control = true;
            for(int j =0; j < row; j++){
                if(M[j][i] == 1 && control)
                    cntaux++;
                if(cntaux == len && control){
                    cnt++;
                    control = false;
                }
                if(M[j][i] == 0){
                    cntaux = 0;
                    control = true;
                }
            }
        }
        printf("%d\n", cnt);
    }
}
