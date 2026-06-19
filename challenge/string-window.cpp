#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    int n = s1.size(), m = s2.size();

    int l = 0, r = 0;

    unordered_map<char, int> m_s1, m_s2;

    int resl = -1, resr = 1e9;

    for (auto x : s2)
        m_s2[x]++;

    while (r < n)
    {
        m_s1[s1[r]]++;

        bool valid = true;

        for (auto pair : m_s2)
        {
            if (m_s1[pair.first] < pair.second)
            {
                valid = false;
                break;
            }
        }

        if (!valid)
        {
            r++;
            continue;
        }

        else
        {
            while (l <= r && l < n && m_s1[s1[l]] > m_s2[s1[l]])
            {
                m_s1[s1[l]]--;
                l++;
            }
        }

        if (resr - resl + 1 > r - l + 1)
        {
            resr = r;
            resl = l;
        }

        r++;
    }

    // cout << resl << " " << resr << '\n';

    if (resl == -1)
        cout << "No String";
    else
        cout << s1.substr(resl, resr - resl + 1);

    return 0;
}