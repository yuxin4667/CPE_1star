#include <iostream>

using namespace std;
int main()
{
	int n, a, b, count=0;
	cin >> n;
	while(cin >> a)
	{
		cin >> b;
		if(a%2==0)
			a++;
		if(b%2==0)
			b--;
		int sum=0;
		for(int i=a;i<=b;i+=2)
		{
			sum+=i;	
		}
		cout << "Case " << ++count << ": " << sum <<endl;
	}
	return 0;
}