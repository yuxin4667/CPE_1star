#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b;
	while(cin >> a >> b)
	{
		if(a==0 && b==0)
			break;
		int i=ceil(sqrt(a));
		int j=floor(sqrt(b));
		cout << j-i+1 << endl;
	}
	return 0;
}