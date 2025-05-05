// C++ Program to find the length of a string without using
// strlen()

#include <iostream>
using namespace std;

int main()
{
    string str;
    int i = 0, counter = 0;
    cout << "Enter sting:";
    cin >> str;
    while (str[i] != '\0')
    {
        counter++;
        i++;
    }
    cout << "\n Lenght of string:" << counter << endl;
    return 0;
}