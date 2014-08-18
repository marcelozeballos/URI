#include <cstdio>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int cases; scanf("%d", &cases);
    while(cases--)
    {
        int c1, y1, c2, y2;
        scanf("%d %d %d %d", &c1, &y1, &c2, &y2);
        double x = ((y2-y1)*1.00)/((c2-c1)*1.00);

        printf("%.2f\n", (int)(100 * x) / 100.0);
    }
}
