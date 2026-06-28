#include <iostream>

using namespace std;

int main()
{
    int ans = 0;
    int n;
    cin >> n;

    // while (n > 0)
    // {
    //     ans += n & 1;
    //     n >>= 1;
    // }

    // cout << ans << '\n';

    while (n > 0)
    {
        n = n & (n - 1);
        ans++;
    }

    cout << ans << '\n';

    return 0;
}