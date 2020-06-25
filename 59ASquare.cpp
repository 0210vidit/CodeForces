// https://codeforces.com/problemset/problem/59/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;
array<int, 2> getLowerUpper(string str)
{
  int lower = 0;
  int upper = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
      upper++;
    }
    else
    {
      lower++;
    }
  }
  array<int, 2> arr = {upper, lower};
  return arr;
}

int main()
{
  string s;
  cin >> s;
  array<int, 2> res = getLowerUpper(s);
  int upper = res[0];
  int lower = res[1];
  if (upper > lower)
  {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    exit(0);
  }
  else if (lower > upper)
  {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    exit(0);
  }
  else
  {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    exit(0);
  }
}