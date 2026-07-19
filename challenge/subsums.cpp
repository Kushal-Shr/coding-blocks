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

    int n, a, b;
    cin >> n >> a >> b;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int subsets = 1LL << n;

    int ans = 0;

    for (int i = 0; i < subsets; i++)
    {
        int sum = 0;

        for (int j = 0; j < n; j++)
        {
            if (i & (1LL << j))
            {
                sum += nums[j];
            }
        }

        if ((sum >= a) && (sum <= b))
            ans++;
    }

    cout << ans << '\n';

    return 0;
}