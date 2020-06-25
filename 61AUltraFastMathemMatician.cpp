// http://codeforces.com/problemset/problem/61/A

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  string num1, num2;
  cin >> num1 >> num2;
  string res;
  for (int i = 0; i < num1.length(); i++)
  {
    if (num1.at(i) != num2.at(i))
    {
      res += '1';
    }
    else
    {
      res += '0';
    }
  }
  cout << res << endl;
}