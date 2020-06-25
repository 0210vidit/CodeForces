#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int check(int year)
{
  set<int> yearSet;
  while (year > 0)
  {
    yearSet.insert(year % 10);
    year /= 10;
  }
  return yearSet.size();
}

int main()
{
  int year;
  cin >> year;
  int new_year = year + 1;
  while (true)
  {
    int res = check(new_year);
    if (res == 4)
    {
      cout << new_year << endl;
      exit(0);
    }
    new_year++;
  }
}