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

int merge(vector<int> &vec, int st, int end, int mid, vector<int> &temp)
{
    int ans = 0;

    int i = st, k = 0, j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (vec[j] < vec[i])
        {
            temp[k++] = vec[j++];
            ans += mid - i + 1;
        }
        else
        {
            temp[k++] = vec[i++];
        }
    }

    while (i <= mid)
        temp[k++] = vec[i++];
    while (j <= end)
        temp[k++] = vec[j++];

    for (int l = 0; l < k; l++)
    {
        vec[st + l] = temp[l];
    }

    return ans;
}

int break_vec(vector<int> &vec, int st, int end, vector<int> &temp)
{
    if (st >= end)
        return 0;

    int mid = st + (end - st) / 2;
    int ans = 0;

    ans += break_vec(vec, st, mid, temp);
    ans += break_vec(vec, mid + 1, end, temp);

    ans += merge(vec, st, end, mid, temp);

    return ans;
}

int32_t main()
{
    i_c_p_c();

    vector<int> arr = {1, 5, 2, 6, 3, 0};

    vector<int> temp(arr.size(), 0);

    cout << break_vec(arr, 0, arr.size() - 1, temp) << endl;

    return 0;
}