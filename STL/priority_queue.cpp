#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> pq;

    for (int i = 0; i < 7; i++)
    {
        int n;
        cin >> n;
        pq.push(n);
    }

    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}