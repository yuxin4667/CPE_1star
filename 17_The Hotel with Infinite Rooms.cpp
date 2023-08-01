#include <iostream>
using namespace std;

int main()
{
	int s;
	long long d;
	while(cin >> s)
	{
		cin >> d;
		long long sum=0;
		int i=s-1;
		while(sum<d)
		{
			i++;
			sum+=i;
		}
		cout << i << endl;
	}
	return 0;
}
//求N個N加到M個M