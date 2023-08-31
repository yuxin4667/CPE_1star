#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int r[51][51]={0};
	int maxx, maxy;
	cin >> maxx >> maxy;
	//cout << maxx << maxy<<endl;
	string str;
	getline(cin, str);
	while(getline(cin, str))
	{
		stringstream ss;
		ss << str;
		
		int x, y;
		ss >> x >> y;
		char c;
		ss >> c;
		//cout << x << y<<c<<endl;
		getline(cin, str);
		//cout << str<<endl;
		int lost=0;
		for(int i=0;i<str.length();i++)
		{
			int tmpx=x, tmpy=y;
			char tmpc=c;
			//cout << x << y<<c<<endl;
			if(str[i]=='L')
			{
				if(c=='N')
				{
					c='W';
					//x--;
					/*if((x-1)<0)
					{
						lost=1;
						break;
					}
					else
						x--;*/
				}
				else if(c=='S')
				{
					c='E';
					//x++;
					/*if((x+1)>maxx)
					{
						lost=1;
						break;
					}
					else
						x++;*/
				}
				else if(c=='E')
				{
					c='N';
					//y++;
					/*if((y+1)>maxy)
					{
						lost=1;
						break;
					}
					else
						y++;*/
				}
				else if(c=='W')
				{
					c='S';
					//y--;
					/*if((y-1)<0)
					{
						lost=1;
						break;
					}
					else
						y--;*/
				}
			}
			else if(str[i]=='R')
			{
				if(c=='N')
				{
					c='E';
					//x++;
					/*if((x+1)>maxx)
					{
						lost=1;
						break;
					}
					else
						x++;*/
				}
				else if(c=='S')
				{
					c='W';
					//x--;
					/*if((x-1)<0)
					{
						lost=1;
						break;
					}
					else
						x--;*/
				}
				else if(c=='E')
				{
					c='S';
					//y--;
					/*if((y-1)<0)
					{
						lost=1;
						break;
					}
					else
						y--;*/
				}
				else if(c=='W')
				{
					c='N';
					//y++;
					/*if((y+1)>maxy)
					{
						lost=1;
						break;
					}
					else
						y++;*/
				}
			}
			else if(str[i]=='F')
			{
				if(c=='N')
				{y++;
					/*if((y+1)>maxy)
					{
						lost=1;
						break;
					}
					else
						y++;*/
				}
				else if(c=='S')
				{y--;
					/*if((y-1)<0)
					{
						lost=1;
						break;
					}
					else
						y--;*/
				}
				else if(c=='E')
				{x++;
					/*if((x+1)>maxx)
					{
						lost=1;
						break;
					}
					else
						x++;*/
				}
				else if(c=='W')
				{x--;
					/*if((x-1)<0)
					{
						lost=1;
						break;
					}
					else
						x--;*/
				}
				if(x>maxx ||x<0 || y>maxy ||y<0)
				{
					if(r[tmpx][tmpy]==0)
					{
						cout << tmpx <<' ' << tmpy << ' ' << c << " LOST" <<endl;
						r[tmpx][tmpy]=1;
						lost=1;
						break;
					}
					else
					{
						x=tmpx;
						y=tmpy;
						//c=tmpc;
					}
					
				}
			}
			//cout << x <<' ' << y << ' ' << c;
			
		}
		if(lost==0)
				cout << x <<' ' << y << ' ' << c <<endl;
		//cout <<endl;
	}
	return 0;
}
