#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int toNextRound = 0;
  vector<int> scores;
  int n, k;
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    int score;
    cin >> score;
    scores.push_back(score);
  }
  int threshold = scores[k - 1];
  // cout << threshold << endl;

  for (int i : scores)
  {
    if (i >= threshold && i != 0)
    {
      toNextRound++;
    }
  }

  cout << toNextRound << endl;
}