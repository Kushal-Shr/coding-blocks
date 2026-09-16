#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &arr, int key, int n, int i)
{
    if (arr[i] == key)
        return i;

    if (n == 0)
        return -1;

    return search(arr, key, n - 1, i - 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 7, 4, 5, 7, 10};
    int key = 7;
    int n = arr.size();

    int ans = search(arr, key, n, n - 1);

    cout << ans;
    return 0;
}