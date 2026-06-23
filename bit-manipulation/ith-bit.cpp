#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int i;
    cin >> i;

    int ith = 1 << i - 1;

    cout << (num & ith) << '\n';

    num = (num | (1 << 2));

    cout << num << '\n';

    return 0;
}