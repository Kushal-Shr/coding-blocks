#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    string s = "I am having a pretty good day,     what about you?";

    stringstream ss(s);
    string word;

    vector<string> words;

    while (ss >> word)
        words.push_back(word);

    for (auto w : words)
        cout << w << " ";
    cout << endl;

    return 0;
}