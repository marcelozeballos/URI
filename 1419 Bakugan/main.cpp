#include <cstdio>
using namespace std;

int main()
{
    int len;
    while(scanf("%d", &len), len > 0)
    {
        int mark[len], leti[len];

        for(int i = 0; i < len; i++)
            scanf("%d", &mark[i]);
        for(int i = 0; i < len; i++)
            scanf("%d", &leti[i]);

        int cntm =0, cntl = 0, auxm, auxl,
            cauxm =1, cauxl =1;
        bool bonus = true;

        for(int i =0; i < len; i++)
        {
            cntm += mark[i];
            cntl += leti[i];
            auxm = mark[i];
            auxl = leti[i];
            if(bonus && auxm == mark[i+1])
                cauxm++;
            if(bonus && auxl == leti[i+1])
                cauxl++;
            if(bonus && auxm != mark[i+1])
                cauxm = 1;
            if(bonus && auxl != leti[i+1])
                cauxl = 1;
            if(cauxl == 3 && cauxm == 3)
                bonus = false;
            if(bonus && (cauxl == 3 && cauxm < 3))
            {
                cntl += 30;
                bonus = false;
            }
            if(bonus && (cauxm == 3 && cauxl < 3))
            {
                cntm += 30;
                bonus = false;
            }
        }
        if(cntm > cntl)
            printf("M\n");
        if(cntl > cntm)
            printf("L\n");
        if(cntm == cntl)
            printf("T\n");
    }
    return 0;
}
