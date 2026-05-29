#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    cin.ignore();

    vector<string> s(n);

    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }

    for (string c : s)
        cout << c << " ";
    cout << endl;

    sort(s.begin(), s.end());

    for (string c : s)
        cout << c << " ";
    cout << endl;

    return 0;
}