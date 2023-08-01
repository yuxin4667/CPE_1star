#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	while(cin >>n1 >> n2)
	{
		int f=0, k=0;
		int a[100];
		while(n1!=0)
		{
			if(n1%n2==0 || n1==1)
			{
				a[k]=n1;
				k++;
				if(n1<=n1/n2)
				{
					f=1;
					break;
				}
				else
					n1=n1/n2;
			}
			else
			{
				f=1;
				break;
			}
		}
		if(f==1)
			cout << "Boring!\n";
		else
		{
			for(int i=0;i<k;i++)
			{
				cout << a[i];
				if(i!=k-1)
					cout << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
