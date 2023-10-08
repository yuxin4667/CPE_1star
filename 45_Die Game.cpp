#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        // int WE[4]={3, 1, 4, 6};
        // int NS[4]={1, 5 ,6, 2};
        vector<int> NS{1, 5, 6, 2};
        vector<int> WE{1, 3, 6, 4};
        while (n--)
        {
            string str;
            cin >> str;

            if (str.compare("north") == 0)
            {
                NS.push_back(NS[0]);
                NS.erase(NS.begin());

                WE[0] = NS[0];
                WE[2] = NS[2];
            }
            else if (str.compare("south") == 0)
            {
                NS.insert(NS.begin(), NS[3]);
                NS.pop_back();

                WE[0] = NS[0];
                WE[2] = NS[2];
            }
            else if (str.compare("east") == 0)
            {
                WE.push_back(WE[0]);
                WE.erase(WE.begin());

                NS[0] = WE[0];
                NS[2] = WE[2];
            }
            else if (str.compare("west") == 0)
            {
                WE.insert(WE.begin(), WE[3]);
                WE.pop_back();

                NS[0] = WE[0];
                NS[2] = WE[2];
            }
        }
        cout << NS[0] << endl;
    }
    return 0;
}