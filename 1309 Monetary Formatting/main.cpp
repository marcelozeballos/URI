#include <iostream>
#include <string>
using namespace std;

int main()
{
    string dollars, cents;
    while(cin >> dollars >> cents)
    {
        string aux = "$";

        while ( dollars.size() > 1 && dollars[0] == '0' )
            dollars.erase(0, 1);

        aux += dollars;
        int cnt =0;
        for(int i = aux.size(); i > 1; i--) {
            if(cnt == 3) {
                aux.insert(i, ",");
                cnt = 1;
            }
            else if(aux[i] != ',')
                cnt++;
        }

        if(cents.size() < 2) {
            aux += '.';
            aux += '0';
            aux += cents;
        }
        else {
            aux += '.';
            aux += cents;
        }

        cout << aux << endl;
    }
    return 0;
}
