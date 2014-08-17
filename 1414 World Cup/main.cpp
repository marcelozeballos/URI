#include <iostream>
#include <string>
using namespace std;

int main()
{
    int teams, matches;
    while(cin >> teams >> matches, teams != 0)
    {
        string trash; int aux[matches], cnt =0;

        for(int i =0; i < teams; i++)
            cin >> trash >> aux[i];

        for(int i =0; i <matches; i++){
            if(aux[i]%3 > cnt)
                cnt = aux[i]%3;
        }
        cout << cnt << endl;
    }
    return 0;
}
