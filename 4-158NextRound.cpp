#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int toNextRound = 0;
  vector<int> scores;
  int n, k;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int score;
    cin >> score;
    scores.push_back(score);
  }
  int threshold = scores[k];
  for (int i : scores)
  {
    cout << i;
  }
}