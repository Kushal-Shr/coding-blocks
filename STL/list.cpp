#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> ll;
    list<int> ll1{1, 2, 3, 6, 4, 5};
    list<string> ll2{"apple", "banana"};

    ll1.push_back(0);

    for (int n : ll1)
        cout << n << " ";
    cout << endl;

    ll1.sort();
    ll1.reverse();

    for (auto n : ll1)
        cout << n << " ";
    cout << endl;

    ll1.pop_front();
    ll1.pop_back();

    ll1.push_front(7);

    for (auto n : ll1)
        cout << n << " ";
    cout << endl;

    ll1.reverse();

    cout << ll1.front() << endl;
    cout << ll1.back() << endl;

    for (auto it = ll1.begin(); it != ll1.end(); it++)
        cout << *it << " ";
    cout << endl;

    ll1.remove(4);

    for (auto it = ll1.begin(); it != ll1.end(); it++)
        cout << *it << " ";
    cout << endl;

    auto it = next(ll1.begin(), 3);
    ll1.erase(it);

    for (auto it = ll1.begin(); it != ll1.end(); it++)
        cout << *it << " ";
    cout << endl;

    it = next(ll1.begin(), 1);
    ll1.insert(it, 4);

    for (auto it = ll1.begin(); it != ll1.end(); it++)
        cout << *it << " ";
    cout << endl;

    return 0;
}