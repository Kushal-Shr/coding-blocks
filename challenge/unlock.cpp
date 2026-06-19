#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> perm(n);
    vector<int> pos(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> perm[i];
        pos[perm[i]] = i;
    }

    int k_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (k_count == k)
            break;

        int max = n - i;

        if (max == perm[i])
            continue;

        else
        {
            swap(perm[i], perm[pos[max]]);
            swap(pos[perm[i]], pos[perm[pos[max]]]);
            k_count++;
        }
    }

    for (auto x : perm)
        cout << x << " ";

    return 0;
}