#include <string>
#include <iostream>

using namespace std;
int main()
{
    setlocale(0, "");
    char str[50];
    int len, a;
    cin >> str;
    len = strlen(str);
    cout << str << endl;
    for (int i = 0; i<len-1; i++)
    {
        for (a='0'; a<='9';a++)
        {
            if (str[i] == a)
            {
                str[i] = NULL;
            }
        }
    }
    puts(str);
    system("pause");