#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<string> str;
  str.push_back("I hate");
  str.push_back("I love");
  string that = "that";
  string res = "I hate";
  for (int i = 2; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      res += " " + that + " " + str[1];
    }
    else
    {
      res += " " + that + " " + str[0];
    }
  }
  cout << res << " "
       << "it" << endl;
}