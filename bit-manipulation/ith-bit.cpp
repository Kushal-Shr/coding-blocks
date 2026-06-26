#include <iostream>

using namespace std;

int get_bit(int n, int i)
{
    int mask = 1 << i;

    return (n & mask);
}

void set_bit(int &n, int i)
{
    int mask = 1 << i;

    n = (n | mask);
}

void clear_bit(int &n, int i)
{
    int mask = 1 << i;
    mask = ~mask;

    n = n & mask;
}

void update_bit(int &n, int i, int v)
{
    int mask = 1 << i;

    if (v == 0)
    {
        mask = ~mask;
        n = n & mask;
    }

    else
        n = n | mask;
}

void clear_range(int &n, int i)
{
    int mask = (~0) << (i + 1);

    n = n & mask;
}

void clear_from_i_to_j(int &n, int i, int j)
{
    int ith = (1 << i) - 1;
    int mask = ((~0) << (j + 1)) | ith;

    n = n & mask;
}

int main()
{
    cout << get_bit(10, 1) << '\n';

    int n = 10;

    set_bit(n, 2);

    cout << n << '\n';

    clear_bit(n, 2);

    cout << n << '\n';

    update_bit(n, 0, 1);
    update_bit(n, 3, 0);

    cout << n << '\n';

    int m = 31;
    clear_range(m, 2);

    cout << m << '\n';

    m = 63;
    clear_from_i_to_j(m, 1, 3);

    cout << m << '\n';

    return 0;
}