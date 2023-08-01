#include <iostream>

using namespace std;

int main()
{
	char ch1[12] = { 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']' };
	char ch2[11] = { 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', 39 };
	char ch3[10] = { 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/' };
	char c;
	int k;
	k = 'A' - 'a';
	while (cin.get(c))
	{
		if (c == ' ' || c == '\n')
		{
			printf("%c", c);
			continue;
		}
		if (c == 39)
		{
			printf("l");
			continue;
		}
		for (int i = 2; i < 12; i++)
		{
			if (c == ch1[i] || c == ch1[i] + k)
			{
				printf("%c", ch1[i - 2]);
				break;
			}
		}
		for (int i = 2; i < 10; i++)
		{
			if (c == ch2[i] || c == ch2[i] + k)
			{
				printf("%c", ch2[i - 2]);
				break;
			}
			if (c == ch3[i] || c == ch3[i] + k)
			{
				printf("%c", ch3[i - 2]);
				break;
			}
		}
	}
	return 0;
}