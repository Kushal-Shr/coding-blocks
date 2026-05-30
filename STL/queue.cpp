#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;

    for (int i = 0; i < 5; i++)
    {
        q.push(i + 1);
    }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}