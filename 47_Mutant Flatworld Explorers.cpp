#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int r[51][51] = {0};
    int maxx, maxy;
    cin >> maxx >> maxy;
    string str;
    getline(cin, str);
    while (getline(cin, str))
    {
        stringstream ss;
        ss << str;

        int x, y;
        ss >> x >> y;
        char c;
        ss >> c;
        getline(cin, str);
        int lost = 0;
        for (int i = 0; i < str.length(); i++)
        {
            int tmpx = x, tmpy = y;
            char tmpc = c;
            if (str[i] == 'L')
            {
                if (c == 'N')
                {
                    c = 'W';
                }
                else if (c == 'S')
                {
                    c = 'E';
                }
                else if (c == 'E')
                {
                    c = 'N';
                }
                else if (c == 'W')
                {
                    c = 'S';
                }
            }
            else if (str[i] == 'R')
            {
                if (c == 'N')
                {
                    c = 'E';
                }
                else if (c == 'S')
                {
                    c = 'W';
                }
                else if (c == 'E')
                {
                    c = 'S';
                }
                else if (c == 'W')
                {
                    c = 'N';
                }
            }
            else if (str[i] == 'F')
            {
                if (c == 'N')
                {
                    y++;
                }
                else if (c == 'S')
                {
                    y--;
                }
                else if (c == 'E')
                {
                    x++;
                }
                else if (c == 'W')
                {
                    x--;
                }
                if (x > maxx || x < 0 || y > maxy || y < 0)
                {
                    if (r[tmpx][tmpy] == 0)
                    {
                        cout << tmpx << ' ' << tmpy << ' ' << c << " LOST" << endl;
                        r[tmpx][tmpy] = 1;
                        lost = 1;
                        break;
                    }
                    else
                    {
                        x = tmpx;
                        y = tmpy;
                    }
                }
            }
        }
        if (lost == 0)
            cout << x << ' ' << y << ' ' << c << endl;
    }
    return 0;
}
