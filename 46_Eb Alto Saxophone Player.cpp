#include <iostream>
#include <cstring>
using namespace std;

void press(char ch, int* finger)
{
	for(int j=0;j<11;j++)
	{
		finger[j]=0;
	}
	if('a'<=ch && 'g'>=ch)
	{
		switch (ch)
		{
			case 'c':
				finger[10]=1;
			case 'd':
				finger[9]=1;
			case 'e':
				finger[8]=1;
			case 'f':
				finger[7]=1;
			case 'g':
				finger[4]=1;
			case 'a':
				finger[3]=1;
			case 'b':
				finger[2]=1;
			default:
				break;	
		}
	}
	else if('A'<=ch && 'G'>=ch)
	{
		switch (ch)
		{
			case 'D':
				finger[9]=1;
			case 'E':
				finger[8]=1;
			case 'F':
				finger[7]=1;
			case 'G':
				finger[4]=1;
			case 'A':
				finger[3]=1;
			case 'B':
				finger[1]=1;
				finger[2]=1;
				break;
			case 'C':
				finger[3]=1;
				break;
			default:
				break;
		}	
	}
}
int main()
{
	int data;
	cin >> data;
	while(data--)
	{
		string str;
		cin >> str;
		
		int finger[11]={0};
		int f1[11]={0};
		int f2[11]={0};
		
		for(int i=0;i<str.length();i++)
		{
			int ch=str[i];
			press(ch, f2);
			
			for(int j=0;j<11;j++)
			{
				if(f2[j]-f1[j]==1)
				finger[j]++;
			}
			
			for(int j=0;j<11;j++)
				f1[j]=f2[j];
		}
		for(int i=1;i<11;i++)
		{
			cout << finger[i];
			if(i!=10)
				cout << ' ';
		}
		cout << endl;
	}
	return 0;
}