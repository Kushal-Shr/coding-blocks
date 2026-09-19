#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bubbleSort(vector<int> &vec, int n, bool isSorted)
{
    if (n == 1 || isSorted)
        return;

    int i = 0;

    isSorted = true;

    while (i < n - 1)
    {
        if (vec[i] > vec[i + 1])
        {
            swap(vec[i], vec[i + 1]);
            isSorted = false;
        }
        i++;
    }

    cout << n << endl;
    bubbleSort(vec, n - 1, isSorted);
}

int main()
{
    vector<int> vec = {4, 3, 2, 1};

    bubbleSort(vec, 4, false);

    for (int num : vec)
        cout << num << " ";
    cout << endl;

    return 0;
}