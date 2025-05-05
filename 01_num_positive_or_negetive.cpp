// C++ Program to check whether a number is positive or
// negative

#include <iostream>
using namespace std;
int main()
{
  int a;
  cout << "Enter a num:";
  cin >> a;
  if (a >= 0)
  {
    cout << a << " is positive";
  }
  else
  {
    cout << a << " is negetive";
  }

  return 0;
}