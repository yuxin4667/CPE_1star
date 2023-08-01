#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int gcd(int max, int min)
{	
	if(max<min)
		swap(max, min);
	
	if(min==0)
		return max;
	else
		return gcd(max%min, min);
}
int main()
{
	int n, pair=0;
	cin >> n;
	string str, str1, str2;
	getline(cin, str);
	
	while(n--)
	{
		while(getline(cin, str1))
		{
			getline(cin, str2);
			int t=0, sum1=0, sum2=0;
			cout << "Pair #" << ++pair << ": ";
			for(int i=str1.length()-1;i>=0;i--)
			{
				sum1+=(str1[i]-'0')*pow(2, t);
				t++;
			}
			
			t=0;
			for(int i=str2.length()-1;i>=0;i--)
			{
				sum2+=(str2[i]-'0')*pow(2, t);
				t++;
			}
			
			if(gcd(sum1, sum2)!=1)
				cout << "All you need is love!\n";
			else
				cout << "Love is not all you need!\n";
		}
	}
	return 0;
}