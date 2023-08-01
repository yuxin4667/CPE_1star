#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;

int main()
{
	int n;
	char c;
	string str;
	cin >> n; //讀取資料行數
	getline(cin, str); //讀掉換行
	int k = 'A' - 'a';
	int total = 0; //計算有效(英文)字母數
	int count['Z' + 1] = { 0 }; //用A~Z的ASCII code當index, 儲存次數
	while (n--)
	{
		getline(cin, str); //讀取一行
		for (int i = 0; i < str.length(); i++)
		{
			if ('A' <= str[i] && 'Z' >= str[i])
			{
				count[(int)str[i]]++;
				total++;
			}
			else if ('a' <= str[i] && 'z' >= str[i])
			{
				count[(int)str[i] + k]++;
				total++;
			}
		}
	}

	for (int i = total; i > 0; i--) //假設次數最大為總字母數
	{
		for (int j = (int)'A'; j <= (int)'Z'; j++) //依照字母順序掃描
		{
			if (count[j] == i) //某字母的次數和目前的次數相等則印出
				printf("%c %d\n", j, i);
		}
	}
	return 0;
}