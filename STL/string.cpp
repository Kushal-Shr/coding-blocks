#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    string s2 = "Hello, World";
    string s3 = s2;

    cout << s2 << endl
         << s3 << endl;

    cout << s1.empty() << endl;

    s1.append("I am Kushal!");
    cout << s1.empty() << endl;

    s3 = s1 + " " + s2;

    cout << s3 << endl;

    s1.clear();

    cout << s1.length() << endl;

    cout << s2.compare(s3) << endl;
    cout << (s2 < s3) << endl;

    string s = "I want to have an apple juice";
    int idx = s.find("an apple");
    cout << idx << endl;

    s.erase(idx, 9);

    cout << s << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;

    auto it = s.begin();
    while (it < s.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    return 0;
}