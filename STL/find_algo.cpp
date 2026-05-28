#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {1, 3, 6, 2, 5, 4};
    int n = sizeof(arr) / sizeof(int);

    int key = 2;
    auto it = find(arr, arr + n, key);

    cout << it - arr << endl;

    return 0;
}