#include <cstdio>
using namespace std;

int main()
{
    int columns, rows;
    while(scanf("%d %d", &columns, &rows), columns > 0 || rows > 0)
    {
        int bidimensional[columns][rows];
        bool control = false;

        for(int i=0; i < rows; i++)
            for(int j =0; j < columns; j++)
                scanf("%d", &bidimensional[j][i]);

        for(int i = 0; i < columns; i++){
        int sum =0;
            for(int j = 0; j < rows; j++){
                sum += bidimensional[i][j];
            }
            if(sum == rows){
                control = true;
                break;
            }
        }

        if(control == true)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
