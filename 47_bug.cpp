#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	int h, w, sp;
	cin >> w >> h;
	int x, y;
	int r[w][h]={0};
	while(cin >> x >> y)
	{
		int over=0;
		char ori;
		int a[4]={0};
		string str;
		cin >> ori;
		cin >> str;
	
		if(ori=='E')
			a[0]=1;
		else if(ori=='S')
			a[1]=1;
		else if(ori=='W')
			a[2]=1;
		else if(ori=='N')
			a[3]=1;
	
		for(int i=0;i<str.length();i++)
		{
			if(over==1)
				break;
			if(str[i]=='L')
			{
				int t=a[0];
				for(int i=1;i<=3;i++)
				{
					a[i-1]=a[i];
				}
				a[3]=t;
			}
			if(str[i]=='R')
			{
				int t=a[3];
				for(int i=2;i>=0;i--)
				{
					a[i+1]=a[i];
				}
				a[0]=t;
			}
			if(str[i]=='F')
			{
				if(a[0]==1)
				{
					if(x+1>w)
					{
						if(r[x][y]!=1)
							over=1;
						else
							continue;
					}
					else
						x=x+1;
				}
				else if(a[1]==1)
				{
					if(y-1<0)
					{
						if(r[x][y]!=1)
							over=1;
						else
							continue;
					}
					else
						y=y-1;
				}
				else if(a[2]==1)
				{
					if(x-1<0)
					{
						if(r[x][y]!=1)
							over=1;
						else
							continue;
					}
					else
						x=x-1;
				}
				else if(a[3]==1)
				{
					if(y+1>h)
					{
						if(r[x][y]!=1)
							over=1;
						else
							continue;
					}
					else
						y=y+1;
				}
				
				if(over==1)
				{
					r[x][y]=1;
					cout << x << ' ' << y << ' ' << ori << ' ' << "LOST" <<endl;
					break;
				}		
			}
		}
		if(a[0]==1)
		{
			ori='E';
		}
		else if(a[1]==1)
		{
			ori='S';
		}
		else if(a[2]==1)
		{
			ori='W';
		}
		else if(a[3]==1)
		{
			ori='N';
		}
		if(over==0)
			cout << x << ' ' << y << ' ' << ori << endl;
	}
	return 0;
}