#include <iostream>
#include <map>
using namespace std;

int main()
{
	int data;
	cin >> data;
	//cout << "d"<<data;
	//map<int, int> m;
	int max=data;
	int fib[100000]={0};
	int f[1000]={0};
	while(data--)
	{	
		int num;
		cin >> num;
		fib[0]=1;
		fib[1]=1;
		//cout << fib[0];
		//auto it=m.begin();
		//it++;it++;
		int i;
		if(num>1)
		{
			for(i=2;fib[i-1]<=num;i++)
			{
				fib[i]=fib[i-1]+fib[i-2];
				//cout << fib[i] << ' ';
			}
		
		int sum=num;
		cout << num << " = ";
		for(int j=i-2;j>0;j--)
		{
			if(sum>=fib[j])
			{
				sum-=fib[j];
				cout << "1";
			}
			else
				cout << "0";
		}
		}
		if(num==1)
			cout << num << " = "<<"1";
		cout << " (fib)" << endl;
		
	}
	return 0;
}