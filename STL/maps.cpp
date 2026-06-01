#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> price;

    price["MoMo"] = 10;
    price["Sandwich"] = 15;

    for (auto pair : price)
        cout << pair.first << ": " << pair.second << endl;

    auto it = price.find("MoMo");
    if (it != price.end())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}