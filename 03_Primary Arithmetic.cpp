#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		if (a == 0 && b == 0)
			break;
		int carry = 0, n_carry = 0;

		while (a != 0 || b != 0)
		{
			if ((a % 10) + (b % 10) + carry >= 10)
			{
				n_carry++;
				carry = 1;
			}
			else
				carry = 0;
			a = a / 10;
			b = b / 10;
		}
		if (n_carry > 1)
			printf("%d carry operations.\n", n_carry);
		else if (n_carry == 1)
			printf("%d carry operation.\n", n_carry);
		else
			printf("No carry operation.\n");
	}
	return 0;
}