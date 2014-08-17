#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int cases, day =1; scanf("%d", &cases);
    float cntglob = 0, sum = 0, aux = cases;
    while(cases--)
    {
        float price, cnt = 1;
        cin >> price;
        sum += price;

        getchar();
        string line;
        getline(cin, line);
        int length = line.size();

        for(int i =0; i< length; i++)
            if(line[i]== ' ')
                cnt++;
        cntglob += cnt;

        printf("day %d: %.0f kg\n", day, cnt);
        day++;
    }
    printf("%.2f kg by day\n", cntglob/aux);
    printf("R$ %.2f by day\n", sum/aux);

    return 0;
}
