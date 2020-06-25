// http: //codeforces.com/problemset/problem/231/A

#include <iostream>
using namespace std;
int main()
{
  int t, p, v, k;
  int solved = 0;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    cin >> p >> v >> k;
    int sum = p + v + k;
    if (sum >= 2)
    {
      solved += 1;
    }
  }
  cout << solved << endl;
}