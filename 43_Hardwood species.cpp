#include <iostream>
#include <cstring>
#include <iomanip>
#include <map>
using namespace std;

int main()
{
	int data;
	cin >> data;
	string str;
	getline(cin, str); // "\n" after data
	getline(cin, str); // blank line
	while(data--)
	{	
		double num=0;
		map<string, int>name;
		
		while(getline(cin, str))
		{	
			if(str.empty())// blank line
				break;
				
			num++;
			
			auto it=name.find(str);
			if(it==name.end())
				name[str]=1;
			else
				name[str]++;
		}
		for(auto it=name.begin();it!=name.end();it++)
		{
			cout << (*it).first << " " << fixed << setprecision(4) << (*it).second/num*100 << endl;
		}
		if(data!=0)
			cout << endl;
	}
	return 0;
}