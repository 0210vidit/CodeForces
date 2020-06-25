#include <iostream>
#include <string>
using namespace std;
int main()
{

  long n;
  cin >> n;
  long res;
  if (n % 2 == 0)
  {
    res = n / 2;
  }
  else
  {
    res = -(n + 1) / 2;
  }
  cout << res << endl;
}