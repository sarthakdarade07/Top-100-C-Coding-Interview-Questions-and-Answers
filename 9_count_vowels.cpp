// C++ Program to count the number of vowels

#include <iostream>
using namespace std;

int main()
{
    string str;
    int ctr = 0, i = 0;

    cout << "Enter string:";
    cin >> str;

    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            ctr++;
        }
        i++;
    }

    cout << "NO of vowels:" << ctr << endl;
    return 0;
}