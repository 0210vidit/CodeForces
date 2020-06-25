// Link : http://codeforces.com/problemset/problem/4/A

#include <iostream>
using namespace std;

void check(int w)
{

  if (w % 2 == 0 && w > 2)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}
int main()
{
  int w;
  cin >> w;
  check(w);
}
