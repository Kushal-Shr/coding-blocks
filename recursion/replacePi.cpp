#include <iostream>
#include <string>

using namespace std;

void replacePi(string &s, int i)
{
    if (i >= s.length() || i + 1 >= s.length())
        return;

    if (s[i] == 'p' && s[i + 1] == 'i')
    {
        int j = i + 2;

        while (j < s.length())
        {
            j++;
        }

        s.append("__");

        while (j >= i + 2)
        {
            s[j + 2] = s[j];
            j--;
        }

        s[i] = '3';
        s[i + 1] = '.';
        s[i + 2] = '1';
        s[i + 3] = '4';

        replacePi(s, i + 4);
    }

    else
        replacePi(s, i + 1);
}

int main()
{
    string s = "xpighpilmpipi";

    cout << s << endl;

    replacePi(s, 0);

    cout << s << endl;

    return 0;
}