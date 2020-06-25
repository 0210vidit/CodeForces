#include <iostream>
using namespace std;
int main()
{
  int l, b;
  int year = 0;
  cin >> l >> b;
  while (l <= b)
  {

    b *= 2;
    l *= 3;
    year++;
  }
  cout << year << endl;
}