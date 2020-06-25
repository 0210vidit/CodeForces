// https://codeforces.com/problemset/problem/467/A

#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  int rooms = 0;
  for (int i = 0; i < t; i++)
  {
    int p, q;
    cin >> p >> q;
    if ((q - p) >= 2)
    {
      rooms++;
    }
  }
  cout << rooms << endl;
}