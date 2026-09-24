#include <iostream>
#include <unordered_map>

using namespace std;

void spelling(int n, unordered_map<int, string> m)
{
    if (n <= 0)
        return;

    int num = n % 10;
    spelling(n / 10, m);

    cout << m[n % 10] << " ";
}

int main()
{
    int n = 2048;

    unordered_map<int, string> m = {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"},
        {6, "six"},
        {7, "seven"},
        {8, "eight"},
        {9, "nine"},
        {0, "zero"}};

    spelling(n, m);

    return 0;
}