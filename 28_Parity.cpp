#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		if(n==0)
			break;
		int p=0, i=0;
		cout << "The parity of ";
		vector<int> v;
		while(n>0)
		{
			if(n%2==1)
			{
				p++;
				v.push_back(1);
			}
			else
				v.push_back(0);
			n/=2;
			i++;
		}
		for(int j=i-1;j>=0;j--)
			cout << v[j];
		cout <<  " is " << p << " (mod 2)." << endl;
	}
	return 0;
}