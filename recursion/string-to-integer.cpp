#include <iostream>
#include <string>

using namespace std;

void stringToInt(string n, int i, int &ans)
{
    if (i >= n.length())
        return;

    int num = n[i] - '0';

    ans = (ans * 10) + num;
    stringToInt(n, i + 1, ans);
}

int main()
{
    string n = "1234";

    int ans = 0;

    stringToInt(n, 0, ans);

    cout << ans << endl;

    return 0;
}