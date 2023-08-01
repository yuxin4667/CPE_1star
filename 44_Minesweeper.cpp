#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int m, n, count=0;
	cin >> m >> n;
	while(m!=0 &&n!=0)
	{
		count++;
		char a[m+2][n+2];
		for(int i=0;i<m+2;i++)
		{
			for(int j=0;j<n+2;j++)
			{
				if(i==0 || j==0 || i==m+1 || j==n+1)
					a[i][j]='0';
				else
					cin >> a[i][j];
					
				if(a[i][j]=='.')
					a[i][j]='0';
			}
		}
		
		for(int i=1;i<m+1;i++)
		{
			for(int j=1;j<n+1;j++)
			{
				if(a[i][j]=='*')
				{
					for(int p=i-1;p<=i+1;p++)
					{
						for(int q=j-1;q<=j+1;q++)
						{
							if(a[p][q]!='*')
								a[p][q]=(int)a[p][q]+1;
						}
					}
				}
			}
		}
		//output
		cout << "Field #" << count << ":" << endl;
		
		for(int i=1;i<m+1;i++)
		{
			for(int j=1;j<n+1;j++)
				cout << a[i][j];
			cout << endl;
		}	
		cin >> m >> n;
		if(m==0 || n==0)
			break;
		else
			cout << endl;
	}
	return 0;
}