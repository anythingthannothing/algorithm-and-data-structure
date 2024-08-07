// Combination을 활용한 풀이
#include <bits/stdc++.h>

using namespace std;

int sum, target, a[9];
pair<int, int> ans;

void combi(int start, vector<int> arr)
{
  if (arr.size() == 2)
  {
    if (a[arr[0]] + a[arr[1]] == target)
    {
      ans = {a[arr[0]], a[arr[1]]};
    }
  }

  for (int i = start; i < 9; i++)
  {
    arr.push_back(i);
    combi(i + 1, arr);
    arr.pop_back();
  }
}

int main()
{
  for (int i = 0; i < 9; i++)
  {
    cin >> a[i];
    sum += a[i];
  }

  target = sum - 100;

  vector<int> v;
  combi(0, v);
  vector<int> seven;

  for (int n : a)
    if (n != ans.first && n != ans.second)
      seven.push_back(n);

  sort(seven.begin(), seven.end());

  for (int n : seven)
    cout << n << "\n";
  return 0;
}

// int a[9], sum;

// vector<int> v;
// pair<int, int> answer;

// void solve()
// {
//     for (int i = 0; i < 9; i++)
//         for (int j = 0; j < i; j++)
//             if (sum - a[i] - a[j] == 100)
//             {
//                 answer = {i, j};
//                 return;
//             }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     for (int i = 0; i < 9; i++)
//     {
//         cin >> a[i];
//         sum += a[i];
//     }
//     solve();
//     for (int i = 0; i < 9; i++)
//     {
//         if (answer.first == i || answer.second == i)
//             continue;
//         v.push_back(a[i]);
//     }
//     sort(v.begin(), v.end());
//     for (int i : v)
//         cout << i << ' ';
//     return 0;
// }

// Permutation을 활용한 풀이
// int a[9];
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     for (int i = 0; i < 9; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a, a + 9);
//     do
//     {
//         int sum = 0;
//         for (int i = 0; i < 7; i++)
//             sum += a[i];
//         if (sum == 100)
//             break;
//     } while (next_permutation(a, a + 9));
//     for (int i = 0; i < 7; i++)
//         cout << a[i] << "\n";
//     return 0;
// }
