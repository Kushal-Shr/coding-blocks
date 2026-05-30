#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    vector<int> b(5, 0);
    vector<int> c(b.begin(), b.end());
    vector<int> d{1, 2, 3, 4, 5};
    vector<int> e = {1, 2, 3, 4, 5};

    for (auto ch : e)
        cout << ch << ' ';

    cout << endl;

    return 0;
}