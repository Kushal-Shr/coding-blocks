#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(int);

    int key = 9;
    bool isPresent = binary_search(arr, arr + n, key);

    if (isPresent)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}