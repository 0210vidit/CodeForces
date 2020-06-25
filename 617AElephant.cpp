// http://codeforces.com/problemset/problem/617/A

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int arr[] = {5,
               4,
               3,
               2,
               1};

  int steps = 0;
  int currentIndex = 0;

  int x;
  cin >> x;
  while (x != 0)
  {
    int currentMax = arr[currentIndex];
    if (x >= currentMax)
    {
      x -= currentMax;
      steps++;
    }
    else
    {
      currentIndex++;
    }
  }
  cout << steps << endl;
}