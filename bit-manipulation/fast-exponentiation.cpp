#include <iostream>

using namespace std;

int main()
{
    int a, n;
    cin >> a >> n;

    int ans = 1;

    while (n > 0)
    {
        int last_bit = n & 1;

        if (last_bit)
        {
            ans = ans * a;
        }

        a *= a;
        n >>= 1;
    }

    cout << ans << '\n';

    return 0;
}