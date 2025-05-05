// C++ Program to toggle string

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string:";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        else
        {
            str[i] = tolower(str[i]);
        }
    }
    cout << "Toggled string:" << str << endl;
    return 0;
}