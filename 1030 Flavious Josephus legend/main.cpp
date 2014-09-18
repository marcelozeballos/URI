#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int cases; cin >> cases;

    while(cases--)
    {
        int num, step; cin >> num >> step;

        vector <int> jos;
        for(int i = 1; i <= num; i++)
            jos.push_back(i);

        int pos = 0;
        vector <int>::iterator it;
        while(jos.size() > 1)
        {
            pos = (pos+step-1)%(int)jos.size();

            it = find(jos.begin(),jos.end(),jos.at(pos));
            jos.erase(it);

            pos = (pos)%jos.size();
        }
        cout << jos.at(0) << endl;
    }
    return 0;
}
