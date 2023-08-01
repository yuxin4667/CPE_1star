#include <iostream>
#include <cstdio>
#include <sstream>
#include <cstring>
#include <map>
using namespace std;

int main()
{
	string str;
	int count=0;
	while(getline(cin, str))//讀取資料筆數那行
	{
		int n, num, f=0;
		count++;
		stringstream ss1;
		ss1 << str;
		ss1 >> n;//資料筆數
		getline(cin, str);//讀取資料那行
		stringstream ss2;
		ss2 << str;
		map<int, int> m;//存兩數之和
		int a[n];
		
		int i=0;
		while(ss2 >> num)
		{
			a[i]=num;//讀取資料放入陣列
			i++;
		}
		
		for(i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(m.find(a[i]+a[j])==m.end())//map找不到兩數之和->沒出現過
					m[a[i]+a[j]]=0;
				else
				{
					f=1;
					break;
				}
			}
			if(f==1)
				break;
		}
		
		if(f==0)
			printf("Case #%d: It is a B2-Sequence.\n\n", count);
		else
			printf("Case #%d: It is not a B2-Sequence.\n\n", count);
		getline(cin, str);//讀取換行
	}	
	return 0;
}