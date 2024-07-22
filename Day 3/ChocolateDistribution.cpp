#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m)
{
    // code
    if (m == 0 || n == 0)
    {
        return 0;
    }
    sort(a.begin(), a.end());
    if (n < m)
    {
        return -1;
    }

    int min_diff = INT_MAX;

    for (int i = 0; i + m - 1 < n; i++)
    {
        int diff = a[i + m - 1] - a[i];
        if (diff < min_diff)
        {
            min_diff = diff;
        }
    }
    return min_diff;
}

int main()
{
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << findMinDiff(a, n, m) << endl;

    return 0;
}