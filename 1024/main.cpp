#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cases; cin >> cases;
    while(cases--)
    {
        string line; getline(cin,line);
        for(int i =0; i < line.size(); i++)
            if(line[i] != ' ' && (line[i] <= 'A' || line[i] >= 'Z') || (line[i] <= 'a' || line[i] >= 'z'))
                line[i] += 3;

        cout << line << endl;
    }
}
