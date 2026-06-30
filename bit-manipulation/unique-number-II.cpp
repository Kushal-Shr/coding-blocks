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

    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int num = 0;
    for (auto ch : nums)
        num ^= ch;

    vector<int> hasSetBits;
    vector<int> hasNoSetBits;

    for (auto ch : nums)
    {
        if ((ch & num) > 0)
            hasSetBits.push_back(ch);
        else
            hasNoSetBits.push_back(ch);
    }

    int num1 = 0;
    for (auto ch : hasSetBits)
        num1 ^= ch;

    int num2 = 0;
    for (auto ch : hasNoSetBits)
        num2 ^= ch;

    cout << num2 << " " << num1 << '\n';

    return 0;
}