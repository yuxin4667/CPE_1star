#include <iostream>
using namespace std;

int main()
{
	long long a, b;
	while (cin >> a)
	{
		cin >> b;
		if (a < b)
			printf("%lld\n", (b - a));
		else
			printf("%lld\n", (a - b));
	}
	return 0;
}