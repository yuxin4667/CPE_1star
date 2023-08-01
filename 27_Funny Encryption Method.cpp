#include <iostream>
using namespace std;

int main()
{	
	int data;
	cin >> data;
	while(data--)
	{
		int n;
		cin >> n;
		int a=n, b1=0, b2=0;
		while(a>0)
		{
			if(a%2==1)
				b1++;
			a/=2;
		}
		a=n;
		while(a!=0)
		{
			int m=a%10;
			while(m>0)
			{
				if(m%2==1)
					b2++;
				m/=2;
			}
			a/=10;
		}
		cout << b1 << " " << b2 << endl;
	}
	return 0;
}
