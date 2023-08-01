#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int m; //餘數
bool fsort(int a, int b)
{
	if ((a % m) < (b % m)) //a餘<b餘:不交換
		return true;
	else if ((a % m) == (b % m)) //a餘=b餘
	{
		//有負數所以不能用 a % 2 == 1
		if ((a % 2 != 0) && (b % 2 == 0)) //a餘=b餘, a奇b偶:不交換
			return true;
		else if ((a % 2 == 0) && (b % 2 != 0))//a餘=b餘, a偶b奇:交換
			return false;
		else if ((a % 2 != 0) && (b % 2 != 0))//a餘=b餘, a奇b奇
		{
			if (a > b) //a餘=b餘, a奇b奇, a>b:不交換
				return true;
			return false;//a餘=b餘, a奇b奇, a<b:交換
		}
		else//a餘=b餘, a偶b偶
		{
			if (a > b)//a餘=b餘, a偶b偶, a>b:交換
				return false;
			return true;//a餘=b餘, a偶b偶, a<b:不交換
		}
	}
	else//a餘>b餘:交換
		return false;
}
int main()
{
	while (1)
	{
		int num, a;
		cin >> num >> m; //get 15 3
		printf("%d %d\n", num, m);
		if (num == 0 && m == 0)
			break;
		vector<int> v;
		while (num--)
		{
			cin >> a;
			v.push_back(a);
		}

		sort(v.begin(), v.end(), fsort);

		for (int i = 0; i < v.size(); i++)
		{
			printf("%d\n", v[i]);
		}
	}
	return 0;
}








