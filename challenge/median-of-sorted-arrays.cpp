#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &a, vector<int> &b, vector<int> &temp, int n)
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < n)
    {
        if (a[i] <= b[j])
            temp[k++] = a[i++];
        else
            temp[k++] = b[j++];
    }

    while (i < n)
        temp[k++] = a[i++];
    while (j < n)
        temp[k++] = b[j++];
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n), temp(n * 2);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    merge(a, b, temp, n);

    int med = (temp[n - 1] + temp[n]) / 2;

    cout << med << endl;

    return 0;
}