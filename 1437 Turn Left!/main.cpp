#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n), n != 0)
    {
        string str; cin >> str;
        int cnt =0;
        char vec[4] = {'N','L','S','O'};
        for(int i=0; i <n; i++){
            if(str[i] == 'D')
                cnt++;
            if(str[i] == 'E')
                cnt--;
            if(cnt > 3)
                cnt =0;
            if(cnt < 0)
                cnt =3;
        }
        cout << vec[cnt] << endl;
    }
    return 0;
}
