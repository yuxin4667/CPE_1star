#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int i, int j)
{
	if(j%i!=0)
		return GCD(j%i, i);
	else
		return i;
}
int main()
{
	int n;
	while(cin >> n && n!=0)
	{
		int G=0;
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				G+=GCD(i, j);
			}
		}
		cout << G << endl;
	}
	return 0;
}