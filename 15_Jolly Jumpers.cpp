#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	while(getline(cin, str))
	{
		int n, vsize, f=0;
		vector<int> v;
		stringstream ss;
		ss << str;
		ss >> vsize;//有vsize筆資料
		int d[vsize]={0};//兩數字之差應介於1~vsize-1之間, 紀錄兩數字之差出現的次數
		
		for(int i=0;i<vsize;i++)
		{
			ss >> n;
			v.push_back(n);//有vsize個數字n, 存進vector
		}
		
		for(int i=0;i<v.size()-1;i++)
		{	
			int diff=v[i+1]-v[i];//計算兩數字之差
			if(abs(diff)==0 || abs(diff)>vsize-1 || d[abs(diff)]!=0) //兩數字之差超出1~vsize-1 || 已經出現過
			{
				cout << "Not jolly" << endl;
				f=1;
				break;
			}
			d[abs(diff)]++;//出現次數+1(其實只有0 or 1)
		}
		if(f==1)
			continue;
		else		
			cout << "Jolly" << endl;
	}
	return 0;
}