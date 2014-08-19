#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int planets;
    while(scanf("%d", &planets), planets > 0)
    {
        int aux = planets, helper = -1;
        string high;
        while(aux--)
        {
            string temp; cin >> temp;
            int year, time;
            scanf("%d %d", &year, &time);
            int diff = year-time;
            if(helper == -1)
                helper = diff;
            if(diff <= helper)
            {
                high = temp;
                helper = diff;
            }
        }
        cout << high << endl;
    }
    return 0;
}
