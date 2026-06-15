#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q, k;
    cin >> q >> k;

    priority_queue<long long> dist;

    for (int i = 0; i < q; i++)
    {
        long long s, x, y;

        cin >> s;

        if (s == 1)
        {
            cin >> x >> y;

            long long rocket = (x * x) + (y * y);

            dist.push(rocket);

            if (dist.size() > k)
            {
                dist.pop();
            }
        }

        else
        {
            cout << dist.top() << "\n";
        }
    }

    return 0;
}