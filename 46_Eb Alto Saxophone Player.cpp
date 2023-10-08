#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    map<char, vector<int>> mp;
    mp['c'] = {0, 1, 1, 1, 0, 0, 1, 1, 1, 1};
    mp['d'] = {0, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    mp['e'] = {0, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    mp['f'] = {0, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    mp['g'] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    mp['a'] = {0, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['b'] = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    mp['C'] = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['D'] = {1, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    mp['E'] = {1, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    mp['F'] = {1, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    mp['G'] = {1, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    mp['A'] = {1, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['B'] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0};

    int t;
    string s;
    cin >> t;
    getline(cin, s); // clear buffer
    while (t--)
    {
        getline(cin, s);
        int count[10] = {0};
        for (int i = 0; i < s.length() - 1; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (mp[s[i + 1]][j] - mp[s[i]][j] == 1)
                {
                    count[j]++;
                }
            }
        }
        for (int j = 0; j < 10; j++)
        {
            if (mp[s[0]][j] - 0 == 1)
            {
                count[j]++;
            }
        }

        for (int j = 0; j < 10; j++)
        {
            cout << count[j];
            if (j != 9)
                cout << ' ';
            else
                cout << endl;
        }
    }
    return 0;
}