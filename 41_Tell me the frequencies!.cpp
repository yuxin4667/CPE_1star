#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	int f=1;
	getline(cin, str);

	while(f==1)
	{
		int freq[128]={0};
		for(int i=0;i<str.length();i++)
		{
			freq[(int)str[i]]++;
		}
		for(int i=1;i<1001;i++)//次數
		{
			for(int j=127;j>=31;j--)//Ascii code
			{
				if(freq[j]==i)
					cout << j << " " << i << endl;
			}	
		}
		if(getline(cin, str))
			cout << endl;
		else
			f=0;
	}	
	return 0;
}