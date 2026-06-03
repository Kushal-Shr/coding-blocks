#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> oset;

int main()
{
    oset o;

    o.insert(11);
    o.insert(24);
    o.insert(52);
    o.insert(11);
    o.insert(3);

    for (auto e : o)
        cout << e << endl;

    cout << "1st element: " << *(o.find_by_order(0)) << endl;
    cout << "Number of elements lesser than 25: " << o.order_of_key(25) << endl;

    return 0;
}