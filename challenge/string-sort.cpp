#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> words(n);

    for (string &word : words)
        cin >> word;

    sort(words.begin(), words.end());

    for (int i = 0; i < words.size() - 1; i++)
    {
        if (words[i + 1].find(words[i]) == 0)
        {
            swap(words[i], words[i + 1]);
        }
    }

    for (string word : words)
        cout << word << endl;

    return 0;
}