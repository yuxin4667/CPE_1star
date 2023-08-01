#include <iostream>
#include <cstring>
//#include <cstring>
using namespace std;

int main()
{
	string str;
	while(getline(cin, str))
	{
		int begin=0, sum=0, base, max=0;
		
		if(str[0]=='+' || str[0]=='-')
			begin=1;

		if(str[begin]==0)
		{
			cout << "such number is impossible!" << endl;
			break;
		}
		
		for(int i=begin;i<=str.length()-1;i++)
		{
			if(str[i]>='A' && str[i]<='Z')
				str[i]=(int)str[i]-'A'+10;
			else if(str[i]>='a' && str[i]<='z')
				str[i]=(int)str[i]-'a'+36;
			else if(str[i]>='0' && str[i]<='9')
				str[i]=(int)str[i]-'0';
		}
		
		for(int i=begin;i<=str.length()-1;i++)
		{
			sum+=(int)str[i];
			if((int)str[i]>max)
				max=(int)str[i];
		}
		
		for(base=max+1;base<=62;base++)
		{
			if(sum==0)
			{
				base=2;
				break;
			}
			if(sum%(base-1)==0)
			{
				break;
			}
		}
		if(base<=62 && base>=2)
			cout << base << endl;
		else 
			cout << "such number is impossible!" << endl;
	}
	return 0;
}