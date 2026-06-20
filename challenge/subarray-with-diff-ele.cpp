#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];

    long long ans = 0;
    int i = 0, j = 0;
    set<int> s;

    while (j < n)
    {
        while (s.find(vec[j]) != s.end())
        {
            s.erase(vec[i]);
            i++;
        }

        s.insert(vec[j]);

        long long len = j - i + 1;

        ans += len * (len + 1) / 2;

        j++;
    }

    cout << ans;

    return 0;
}