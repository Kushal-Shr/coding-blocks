#include <iostream>

using namespace std;

int power(int a, int n)
{
    if (n == 0)
        return 1;

    return a * power(a, n - 1);
}

int fastPower(int a, int n)
{
    if (n == 0)
        return 1;

    if (n & 1)
        return a * (fastPower(a, n >> 1) * fastPower(a, n >> 1));

    return (fastPower(a, n >> 1) * fastPower(a, n >> 1));
}

int main()
{
    cout << power(5, 4) << endl;
    cout << fastPower(2, 10) << endl;
    return 0;
}