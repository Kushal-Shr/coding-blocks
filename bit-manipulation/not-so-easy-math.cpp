#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define int long long
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void i_c_p_c()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int32_t main()
{
    i_c_p_c();

    int t;
    cin >> t;

    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19};

    while (t--)
    {
        int n;
        cin >> n;

        int subsets = (1 << 8) - 1;

        int ans = 0;

        for (int i = 1; i <= subsets; i++)
        {
            int setBits = setbits(i);
            int den = 1;

            for (int j = 0; j < 8; j++)
            {
                if (i & (1 << j))
                {
                    den = den * primes[j];
                }
            }

            if (setBits & 1)
            {
                ans += n / den;
            }
            else
            {
                ans -= n / den;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}