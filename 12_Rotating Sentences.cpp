#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

int main()
{
	string str;
	int nstr = 100;
	char ch[101][101] = { 0 };
	int lstr[101] = { 0 };
	int max = 0;
	while (getline(cin, str))
	{
		lstr[nstr] = str.length();
		for (int i = 0; i < 101; i++)
		{
			if (max < lstr[i])
				max = lstr[i];
		}
		for (int i = 0; i < max; i++)
		{
			ch[nstr][i] = str[i];
			if (i >= str.length())
				ch[nstr][i] = 32;
		}
		nstr--;
	}

	for (int i = 0; i < max; i++)
	{
		for (int j = nstr + 1; j < 101; j++)
		{
			if (ch[j][i] == 0)
				break;
			cout << ch[j][i];
		}
		cout << endl;
	}
	return 0;
}