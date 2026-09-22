#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &vec, int st, int end)
{
    int mid = st + (end - st) / 2;
    int i = st, j = mid + 1, k = st;

    vector<int> temp(100, 0);

    while (i <= mid && j <= end)
    {
        if (vec[i] < vec[j])
            temp[k++] = vec[i++];
        else
            temp[k++] = vec[j++];
    }

    while (i <= mid)
        temp[k++] = vec[i++];
    while (j <= end)
        temp[k++] = vec[j++];

    for (int i = st; i <= end; i++)
    {
        vec[i] = temp[i];
    }
}

void mergeSort(vector<int> &vec, int st, int end)
{
    if (st >= end)
        return;

    int mid = st + (end - st) / 2;

    mergeSort(vec, st, mid);
    mergeSort(vec, mid + 1, end);

    merge(vec, st, end);
}

int main()
{
    vector<int> vec = {5, 6, 1, 2, 4, 0};

    for (int ch : vec)
        cout << ch << " ";
    cout << endl;

    mergeSort(vec, 0, vec.size() - 1);

    for (int ch : vec)
        cout << ch << " ";
    cout << endl;

    return 0;
}