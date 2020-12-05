#include <iostream>
#include <string> 
using namespace std;

int main()
{
    int i = 0;
    int k = 0;
    string s;
    cout << "Vvedite stroky:\n";
    cin >> s;
    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            k++;
        }
        i++;
    }
    cout << "Kolichestvo propisnih bukv=" << k << endl;
    system("pause");
    return 0;
}
