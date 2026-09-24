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

int partition(vector<int> &vec, int st, int end)
{
    int i = st - 1, j = i + 1;

    while (j <= end - 1)
    {
        if (vec[j] <= vec[end])
        {
            i++;
            swap(vec[i], vec[j]);
        }

        j++;
    }

    swap(vec[i + 1], vec[end]);
    return i + 1;
}

void quickSort(vector<int> &vec, int st, int end)
{
    if (st >= end)
        return;

    int p = partition(vec, st, end);

    quickSort(vec, st, p - 1);
    quickSort(vec, p + 1, end);
}

int32_t main()
{
    i_c_p_c();

    vector<int> vec = {2, 7, 8, 6, 1, 5, 4};
    int n = vec.size();

    for (int ch : vec)
        cout << ch << " ";
    cout << endl;

    quickSort(vec, 0, n - 1);

    for (int ch : vec)
        cout << ch << " ";
    cout << endl;

    return 0;
}