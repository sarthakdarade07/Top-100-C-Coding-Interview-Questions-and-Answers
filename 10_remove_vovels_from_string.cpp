#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    string str = "hi";
    int j = 0;
    cout << "Enter a string:";
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
        {
            str[j] = str[i];
            j++;
        }
    }

    while (j < str.size())
    {

        str[j] = '\0';

        j++;
    }
    cout << endl
         << str << endl;
    return 0;
}