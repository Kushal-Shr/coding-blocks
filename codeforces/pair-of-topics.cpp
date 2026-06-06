#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> oset;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
    }

    oset st;

    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += st.size() - st.order_of_key({-c[i], i});
        st.insert({c[i], i});
    }

    cout << ans << endl;

    return 0;
}