// GRAINS IN A CHESSBOARD

#include <cstdio>
using namespace std;

int main()
{
    unsigned long long board[65];
    board[0] = 0;
    board[1] = 1;

    for(int i = 2; i < 65; i++)
        board[i] = board[i-1]*2;

    int cases; scanf("%d", &cases);
    while(cases--)
    {
        int aux; scanf("%d", &aux);
        unsigned long long sum =0;

        for(int i =0; i <= aux; i++)
            sum += board[i];

        sum = sum/12; // grains to grams
        sum = sum/1000; // grams to kg

        printf("%llu kg\n", sum);
    }
    return 0;
}
