#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int s, d, a, b;
		cin >> s >> d;
		a=(s+d)/2;
		b=s-a;
		if(a<0 || b<0 || (s+d)%2!=0)
			cout << "impossible" << endl;
		else
			cout << a << " " << b << endl;
	}
	return 0;
}