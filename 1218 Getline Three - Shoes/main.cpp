#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    string val;
    int cases = 1;
    while(cin >> val)
    {
        if(cases >= 2)
            printf("\n");

        getchar();
        string line; getline(cin, line);
        int length = line.size();

        int cnt = 0, fem = 0, mas =0;

        for(int i =0; i < length; i = i+5)
        {
            int aux = i;
            if(val[0] == line[i] && val[1] == line[i+1])
            {
                cnt++;
                aux = aux + 3;
                if(line[aux] == 'F')
                    fem++;
                if(line[aux] == 'M')
                    mas++;
            }
        }
        printf("Caso %d:\n",cases);
        printf("Pares Iguais: %d\n", cnt);
        printf("F: %d\n", fem);
        printf("M: %d\n", mas);
        cases++;
    }
    return 0;
}
