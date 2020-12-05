#include <string>
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    char str[50];
    int a = 0;
    cin >> str;
    char b[] = {'A', 'a', 'E', 'e', 'I', 'i', 'Y', 'y', 'U', 'u', 'O', 'o'};
    cout << str << endl;
    cout << "Vvedite simvol: ";
    for (int i = 0; i<50; i++)
    {
        for (int c = 0; c <= 12; c++)
        {
            if (str[i] == b[c])
            {
                a++;
            }
        }
    }
    cout << "Символ " <<  a << " встречается раз\n";
    system("pause");