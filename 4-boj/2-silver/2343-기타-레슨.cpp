#include <bits/stdc++.h>

using namespace std;

int n, m, a[100001], cnt, sum, total, answer = 987654321, _max = -987654321;

bool check(int mid)
{
  if (mid < _max)
  {
    return false;
  }

  cnt = 1;
  sum = 0;

  for (int i = 0; i < n; i++)
  {
    if (sum + a[i] > mid)
    {
      sum = 0;
      cnt++;
    }
    sum += a[i];
  }

  return cnt <= m;
}

int main()
{
  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    total += a[i];
    _max = max(a[i], _max);
  }

  int lo = 0, hi = total, mid;

  while (lo <= hi)
  {
    mid = lo + (hi - lo) / 2;

    if (check(mid))
    {
      answer = mid;
      hi = mid - 1;
    }
    else
    {
      lo = mid + 1;
    }
  }

  cout << answer;

  return 0;
}