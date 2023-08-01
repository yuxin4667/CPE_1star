#include <iostream>
using namespace std;

long long f(long long n)
{
	int sum = 0;
	while (n != 0)
	{
		sum = sum + n % 10;
		n = n / 10;
	}
	if (sum >= 10)
		return f(sum);
	else
		return sum;
}
int main()
{
	long long n;
	while (cin >> n)
	{
		if (n == 0)
			break;
		cout << f(n) << endl;
	}
	return 0;
}