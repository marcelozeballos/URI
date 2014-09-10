#include <iostream>
#include <cstdio>
using namespace std;

int dr[] = {1,0,-1,0};
int dc[] = {0,1,0,-1};
int r, c;
char grid[55][55];

void floodfill(int row, int col, char a)
{
    if(row < 0 || row >= r || col < 0 || col >= c) return;
    if(grid[row][col] != a && grid[row][col]!='T') return;
    if(grid[row][col]=='T')grid[row][col]='-';
    else grid[row][col]='*';
    for(int d = 0; d < 4; d++)
        floodfill(row+dr[d],col+dc[d],a);

    return;
}
int main()
{
    while(scanf("%d %d", &r, &c), r || c)
    {
        for(int i =0; i < r; i++)
            for(int j =0; j < c; j++)
                cin >> grid[i][j];

        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(grid[i][j] == 'T')
                    floodfill(i,j,'A');
            }
        }
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(grid[i][j]=='-')cout << 'T';
                else if(grid[i][j]=='*')cout << 'T';
                else cout << grid[i][j];
            }
            printf("\n");
        }
    }
}
