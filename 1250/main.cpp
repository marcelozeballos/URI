#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    int cases; scanf("%d", &cases);
    while(cases--)
    {
        int length, cnt =0; scanf("%d", &length);
        int shots[length];
        for(int i =0; i < length; i++)
            scanf("%d", &shots[i]);

        string jumps; cin >> jumps;
        for(int i =0; i < length; i++){
            if(jumps[i] == 'J' && shots[i] > 2)
                cnt++;
            if(jumps[i] == 'S' && shots[i] <= 2)
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
