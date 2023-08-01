#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int pflag=0, eflag=1, origin=n;
		cout << n;
		for(int i=2;i<n;i++)
		{
			if(n%i==0)//prime
			{
				pflag=1;
				break;
			}
		}
		if(pflag==0)
		{
			int a[7]={0};
			int i;
			for(i=0;n!=0;i++)
			{
				a[i]=n%10;
				n=n/10;
			}
			int newn=0, t=0, mypow=1;
			for(int j=i-1;j>=0;j--)
			{
				newn+=a[j]*mypow;
				mypow*=10;
			}
			if(origin!=newn)
			{	
				for(int k=2;k<newn;k++)
				{
					if(newn%k==0)
					{
						eflag=0;//not em
						break;
					}
				}
			}
			else
				eflag=0;
		}
		if(pflag==0 && eflag==1)
			cout << " is emirp." << endl;
		else if(pflag==0 && eflag==0)
			cout << " is prime." << endl;
		else if(pflag==1)
			cout << " is not prime." << endl;
		
	}
	return 0;
}