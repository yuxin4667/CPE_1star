#include <iostream>
using namespace std;

int main()
{
	int i, j, original;
	while (cin >> i)
	{
		cin >> j;
		printf("%d %d ", i, j);
		if (i > j)
			swap(i, j);

		int max = 0;
		for (int k = i; k <= j; k++)
		{
			int length = 0, n = k;
			while (n != 1)
			{
				if (n % 2 != 0)
				{
					n = 3 * n + 1;
					length++;
				}
				else
				{
					n = n / 2;
					length++;
				}
			}
			length++;
			if (max < length)
				max = length;
		}
		printf("%d\n", max);
	}
	return 0;
}