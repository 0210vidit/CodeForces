// http://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>

using namespace std;

string abbv(string s)
{
  int len = s.length();
  if (len <= 10)
  {
    return s;
  }
  else
  {
    int new_len = len - 2;
    return s.at(0) + to_string(new_len) + s.at(len - 1);
  }
}

int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    string s;
    cin >> s;
    cout << abbv(s) << endl;
    ;
  }
}