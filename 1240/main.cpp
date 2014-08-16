#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cases; cin >> cases;
    while(cases--)
    {
        string str1, str2; cin >> str1 >> str2;

        int len = str2.size();
        bool control = true;
        for(int i = str1.size(), j = str2.size(); i <= len; i--, j--, len--){
            if(str1[i] != str2[j]){
                control = false;
                break;
            }
        }
        if(control)
            cout << "encaixa\n";
        else
            cout << "nao encaixa\n";
    }
    return 0;
}
