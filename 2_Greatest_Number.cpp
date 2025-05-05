// C++ program to find greatest
// among three numbers using

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 3 nos:";
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        cout << a << " is greatest \n";
    }
    else if (b >= c)
    {
        cout << b << " is greatest \n";
    }
    else
    {
        cout << c << " is grestest \n";
    }
    return 0;
}