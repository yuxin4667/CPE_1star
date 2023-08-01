#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
	int day[13] = { -1, 10, 21, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12 };
	string w[8] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday" };
	int data;
	cin >> data;
	while (data--)
	{
		int m, d, week;
		cin >> m >> d;

		if (day[m] <= d)
			week = (d - day[m]) % 7;
		else if (day[m] > d)
			week = 7 - ((day[m] - d) % 7);

		cout << w[week] << endl;
	}
	return 0;
}