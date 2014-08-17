#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int cases; scanf("%d", &cases);
    while(cases--)
    {
        int length; scanf("%d", &length);
        string name[length], record[length];
        int average[length], cnt[length];
        double av[length];
        bool first = true;

        memset(average, 0, sizeof(average));
        memset(cnt, 0, sizeof(cnt));

        for(int i =0; i < length; i++)
            cin >> name[i];
        for(int i =0; i < length; i++)
            cin >> record[i];

        for(int i =0; i < length; i++)
        {
            for(int j =0; j < record[i].size(); j++)
            {
                if(record[i].at(j) == 'P')
                    cnt[i]++;
                if(record[i].at(j) != 'M')
                    average[i]++;
            }
            av[i] = (cnt[i]*100.00)/average[i];

        }

        for(int i =0; i < length; i++){
            if(av[i] < 75.0){
                if(first){
                    cout << name[i];
                    first = false;
                }
                else
                    cout << " " <<  name[i];
            }
        }
        printf("\n");
    }
    return 0;
}
