#include <iostream>
#include <string>
using namespace std;

int main()
{
    char fail; string str;
    while(cin >> fail >> str, fail != '0')
    {
        string aux, ver;
        bool zeros = true;
        for(int i =0; i < str.size(); i++){
            if(str[i] != '0')
                zeros = false;
            if(zeros == false)
                aux += str[i];
        }
        for(int i =0; i < aux.size();i++){
            if(aux[i] != fail)
                ver += aux[i];
        }
        bool zeros2 = false;

        for(int i =0; i < ver.size(); i++){
            if(ver[i] == '0')
                zeros2 = false;
            else if(ver[i] != '0' || (ver.size() ==1 && ver[0] == '0')){
                zeros2 = true;
                break;
            }
        }

        bool zeros3 = true;
        string ver2;
        if(zeros2 == false)
            ver2 = "0";
        else{
            for(int i =0; i < ver.size(); i++){
            if(ver[i] != '0')
                zeros3 = false;
            if(zeros3 == false)
                ver2 += ver[i];
            }
        }
        cout << ver2 << endl;
    }
    return 0;
}
