#include <string>
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    char str[] = "prostaya stroka\n";
    char symbol;
    int a = 0;
    cout << str << endl;
    cout << "Vvedite simvol: ";
    cin >> symbol;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]==symbol)
            {
                a++;
            }
    }
    cout << "Символ " << symbol << " " << a << " встречается раз\n";
    system("pause");
}