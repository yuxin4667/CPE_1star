#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	string str1, str2;
	while (getline(cin, str1))
	{
		map<char, int> m;
		getline(cin, str2);
		for (int i = 0; i < str1.length(); i++)
		{
			if ('a' <= str1[i] && str1[i] <= 'z')
			{
				for (int j = 0; j < str2.length(); j++)
				{
					if (str1[i] == str2[j])
					{
						m[str1[i]]++;
						str2[j] = '1'; //避免第1列重複的數字累加
						break; //避免第2列重複的數字累加
					}
				}
			}
		}

		for (auto it = m.begin(); it != m.end(); it++)
		{
			for (int i = 0; i < (it->second); i++)
			{
				cout << it->first;
			}
		}
		cout << endl;
	}
	return 0;
}