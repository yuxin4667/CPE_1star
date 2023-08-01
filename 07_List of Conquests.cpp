#include <iostream>
#include <cstring>
#include <sstream>
#include <map>
using namespace std;

int main()
{
	string str;
	int n;
	cin >> n;
	getline(cin, str); //get"\n"
	map <string, int> m;
	while(n--)
	{
		string country;
		stringstream ss;
		getline(cin, str);
		ss << str;
		getline(ss, country, ' ');
		m[country]++;
	}
	for(auto it=m.begin();it!=m.end();it++)
	{
		cout << it->first << " " << it->second << "\n";
	}
	return 0;
}