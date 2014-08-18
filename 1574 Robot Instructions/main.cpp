#include <cstdio>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int cases; scanf("%d", &cases);
    while(cases--)
    {
        int n; scanf("%d", &n);
        getchar();
        int vec[n], pos =0,aux =n, i =0;
        while(aux--)
        {
            string line; getline(cin, line);
            int length = line.size();
            if(line[0] == 'L'){
                pos--;
                vec[i] = -1;
            }
            if(line[0] == 'R'){
                pos++;
                vec[i] = 1;
            }
            if(length > 7){
                int x;
                string num;
                for(int j = 8; j < length; j++)
                    num += line[j];
                stringstream sso(num);
                sso >> x;
                x = x-1;
                pos += vec[x];
                vec[i] = vec[x];
            }
            i++;
        }
        printf("%d\n", pos);
    }
}
