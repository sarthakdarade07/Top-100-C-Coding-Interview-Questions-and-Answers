// Write a Program to Find the Sum of the First N Natural Numbers

#include <iostream>
using namespace std;

int main()
{
    int sum = 0, n;

    cout << "Enter upto which you want sum:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "sum is: " << sum;
    return 0;
}
