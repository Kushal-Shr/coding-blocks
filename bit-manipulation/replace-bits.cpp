#include <iostream>

using namespace std;

int main()
{
    int n = 128, m = 21, i = 2, j = 6;

    int left = (~0) << (j + 1);
    int right = (1 << i) - 1;
    int mask = left | right;

    n = n & mask;

    m = m << i;

    n = n | m;

    cout << n << '\n';

    return 0;
}