#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	string str;
	while(getline(cin, str))
	{
		int x, a, n=-1, sum=0;
		vector<int> v;
		
		stringstream xss;
		xss << str;
		xss >> x; //讀取X代入值
		
		getline(cin, str);
		stringstream ss;
		ss << str;
		
		while(ss >> a)
		{
			v.push_back(a); //讀取係數，存進vector
			n++; //最高次方數
		}

		for(int i=0;i!=v.size()-1;i++)
		{
			sum+=v[i]*n*pow(x, n-1);
			n--;
		}
		cout << sum << endl;
	}
	return 0;
}