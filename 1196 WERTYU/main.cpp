#include <iostream>
#include <string>
using namespace std;

int main()
{
    char keyboard[48] = {'`','1','2','3','4','5','6','7','8','9','0','-','=',
                         'Q','W','E','R','T','Y','U','I','O','P','[',']','\\',
                          'A','S','D','F','G','H','J','K','L',';','\'',
                          'Z','X','C','V','B','N','M',',','.','/'};
    string wrong;
    while(getline(cin, wrong))
    {
        int length = wrong.size();

        for(int i =0; i < length; i++)
        {
            if(wrong[i] != ' ')
            {
                for(int j = 0; j < 47; j++)
                    if(wrong[i] == keyboard[j]){
                        wrong[i] = keyboard[j-1];
                        break;
                    }
            }
        }
        cout << wrong << endl;
    }
    return 0;
}
