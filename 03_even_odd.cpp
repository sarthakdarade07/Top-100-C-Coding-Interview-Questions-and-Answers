// C++ program to check for even or odd

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number:";
    cin >> a;

    a % 2 == 0 ? cout << a << " is even\n" : cout << a << " is odd\n";
    return 0;
}
