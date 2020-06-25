#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
  string res;
  int t;
  cin >> t;
  cin >> res;
  int Anton = count(res.begin(), res.end(), 'A');
  int Danik = count(res.begin(), res.end(), 'D');
  if (Anton == Danik)
  {
    cout << "Friendship" << endl;
    exit(0);
  }
  string result = Anton > Danik ? "Anton" : "Danik";
  cout << result << endl;
}