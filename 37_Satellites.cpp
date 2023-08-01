#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double s, a, r=6440.0;
	while(cin >> s >> a)
	{
		string str;
		cin >>str;

		if(str=="min")
			a/=60;
		if(a>180)
			a=360-a;

		double ad, cd;
		ad=2*(r+s)*(a/360)*M_PI;
		cd=2*(r+s)*sin(a*M_PI/360);
		
		cout << fixed << setprecision(6)<< ad << ' ' << cd << endl;
	}
	return 0;
}