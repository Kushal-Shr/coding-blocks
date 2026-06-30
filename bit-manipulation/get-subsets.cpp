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

string filterChars(int n, string &a)
{
    int i = 0;
    string res = "";

    while (n > 0)
    {
        int last_bit = n & 1;

        if (last_bit == 1)
        {
            res += a[i];
        }

        i++;
        n >>= 1;
    }

    return res;
}

vector<string> getSubsets(string &a)
{
    int n = a.length();
    vector<string> ans((1 << n));

    for (int i = 0; i < (1 << n); i++)
    {
        ans[i] = filterChars(i, a);
    }

    return ans;
}

int32_t main()
{
    i_c_p_c();

    string a = "abc";

    vector<string> ans = getSubsets(a);

    for (auto s : ans)
    {
        cout << s << '\n';
    }

    return 0;
}