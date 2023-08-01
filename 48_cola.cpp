#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int sum=n, emp=n;//喝完第一次，獲得n個空瓶
		while(emp>=3)//空瓶無法換cola時
		{
			sum=sum+(emp/3);//3空瓶換1cola並喝掉
			emp=(emp/3)+emp%3;//剛喝完的cola+沒換掉的空瓶
		}
		if(emp==2)//剩2空瓶，可借
			sum++;
		cout << sum << endl;
	}
	return 0;
}