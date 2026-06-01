#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int, string> rank;

    rank.insert({1, "Shubhangi"});
    rank.insert({2, "Kushal"});
    rank.insert({1, "Scarlet"});

    for (auto p : rank)
        cout << p.first << " " << p.second << endl;

    return 0;
}