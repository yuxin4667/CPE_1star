#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char c;
	int n = 0;
	char ch = '"';
	while (cin.get(c))
	{
		if (c == ch)
		{
			if (n % 2 == 0)
				printf("``");
			else
				printf("''");
			n++;
		}
		else
			printf("%c", c);
	}
	return 0;
}