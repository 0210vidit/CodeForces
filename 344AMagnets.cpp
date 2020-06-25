//http://codeforces.com/problemset/problem/344/A

#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
  int t;
  cin >> t;
  vector<string> str;
  int groups = 1;
  for (int i = 0; i < t; i++)
  {
    string s;
    cin >> s;
    str.push_back(s);
  }

  for (int i = 0; i < str.size() - 1; i++)
  {
    if (str[i] != str[i + 1])
    {
      groups++;
    }
  }
  cout << groups << endl;
}