
#include <iostream>
using namespace std;
int main()
{

    char sub[] = "ert";
    cout << sub;
    char str[] = "qwerty asd ert iopx ertyu";
    cout << str;
    cout << "\n";
    int count = 0;

    char* pos = strchr(str, sub[0]);
    do
    {
        if (!strncmp(&pos[0], sub, strlen(sub)))
            count++;
        pos = strchr(&str[strlen(str) - strlen(pos) + 1], sub[0]);
    } while (pos);

    cout << "Kol-vo vhoshdeniy=" << count << endl;
    system("pause");
    return 0;

}
