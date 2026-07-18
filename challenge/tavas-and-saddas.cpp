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

    string n;
    cin >> n;

    int len = n.length();

    int ans = (1 << len) - 2;

    int pos = 0;

    for (int i = 0; i < len; i++)
    {
        pos *= 2;

        if (n[i] == '7')
            pos += 1;
    }

    ans = pos + ans + 1;

    cout << ans << '\n';

    return 0;
}