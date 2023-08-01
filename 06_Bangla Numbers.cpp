#include <iostream>
using namespace std;

void f(long long n)
{
	if(n >= 10000000)
	{
		if(n/10000000 >=  1)
		{
			f(n/10000000);
			n=n%10000000;
		}
		if(n/10000000 ==0)
			printf(" kuti");
		else
			printf(" %lld kuti",	n/10000000);
		
		n=n%10000000;
	}
	if(n >= 100000)
	{
		if(n/100000 ==0)
			printf(" lakh");
		else
			printf(" %lld lakh", n/100000);
		n=n%100000;
	}
	if(n >= 1000)
	{
		if(n/1000 ==0)
			printf(" hajar");
		else
			printf(" %lld hajar", n/1000);
		n=n%1000;
	}
	if(n >= 100)
	{
		if(n/100 ==0)
			printf(" shata");
		else
			printf(" %lld shata", n/100);
		n=n%100;
	}
	if(n!=0)
		printf(" %lld", n);
	
}
int main()
{	
	long long n;
	int count=0;
	while(cin >> n)
	{	
		count++;
		printf("%4d.", count);
		if(n!=0)
			f(n);
		else
			printf(" 0");
		printf("\n");
	}
	return 0;
}