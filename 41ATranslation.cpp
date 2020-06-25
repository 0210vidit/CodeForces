// https://codeforces.com/problemset/problem/41/A
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
  string s1, s2;
  cin >> s1 >> s2;
  reverse(s1.begin(), s1.end());
  string res = s1 == s2 ? "YES" : "NO";
  cout << res << endl;
}