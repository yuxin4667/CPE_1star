#include <iostream>
#include <cstring>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
	char ch;
	string str;
	while (getline(cin, str))
	{
		vector<int> v;
		stringstream ss;
		ss << str;
		while (ss >> ch)
		{
			v.push_back((int)ch - '0');
		}
		if (v[0] == 0)
			break;
		int sum = 0;
		for (int i = 0; i < v.size(); i++)
		{
			printf("%d", v[i]);
			if (i % 2 == 0)
				sum += v[i];
			else
				sum -= v[i];
		}
		if (sum % 11 == 0)
			printf(" is a multiple of 11.\n");
		else
			printf(" is not a multiple of 11.\n");
	}
	return 0;
}