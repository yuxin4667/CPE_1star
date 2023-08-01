#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int k = 0; k < num; k++)
	{
		vector<int> v;
		int home;
		cin >> home;

		for (int i = 0; i < home; i++)
		{
			int s;
			cin >> s;
			v.push_back(s);
		}
		sort(v.begin(), v.end());
		int sum = 0;
		for (int i = 0; i < home; i++)
		{
			sum += abs(v[i] - v[home / 2]);
		}
		printf("%d\n", sum);
	}
	return 0;
}