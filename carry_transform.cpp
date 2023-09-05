#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string str;

    while (getline(cin, str))
    {
        stringstream ss;
        ss << str;

        string s;
        int b1, b2;

        ss >> s >> b1 >> b2;
        while (s.length() < 7)
        {
            s = '0' + s;
        }

        long long sum = 0;
        int num[7] = {0};
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if ('A' <= s[i] && s[i] <= 'F')
            {
                num[i] = s[i] - 'A' + 10;
            }
            else
            {
                num[i] = s[i] - '0';
            }
        }

        for (int i = 0; i < s.length(); i++)
        {
            sum = sum * b1;
            sum = sum + num[i];
        }

        int a[7] = {0};
        char ans[7] = {'0'};
        for (int i = 6; i >= 0; i--)
        {
            a[i] = sum % b2;
            sum = sum / b2;
        }
        for (int i = 0; i < 7; i++)
        {
            if (10 <= a[i] && a[i] <= 15)
            {
                ans[i] = a[i] + 'A' - 10;
            }
            else
                ans[i] = a[i] + '0';
        }
        for (int i = 0; i < 7; i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}