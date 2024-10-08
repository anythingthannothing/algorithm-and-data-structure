#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries)
    {
        int n = arr.size();
        vector<int> prefixXOR(n + 1, 0);
        vector<int> result;

        for (int i = 0; i < n; i++)
        {
            prefixXOR[i + 1] = prefixXOR[i] ^ arr[i];
        }

        for (const auto &q : queries)
        {
            result.push_back(prefixXOR[q[1] + 1] ^ prefixXOR[q[0]]);
        }

        return result;
    }
};