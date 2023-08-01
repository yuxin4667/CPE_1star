#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double p1x, p2x, p3x, p4x, p1y, p2y, p3y, p4y;
	while(cin >> p1x >> p1y >> p2x >> p2y >> p3x >> p3y>> p4x >> p4y)
	{
		double x, y;
		if(p2x==p3x && p2y==p3y)
		{
			x=p1x+p4x-p3x;
			y=p1y+p4y-p3y;
		}
		if(p2x==p4x && p2y==p4y)
		{
			x=p1x+p3x-p2x;
			y=p1y+p3y-p2y;
		}
		if(p1x==p4x && p1y==p4y)
		{
			x=p2x+p3x-p1x;
			y=p2y+p3y-p1y;
		}
		if(p1x==p3x && p1y==p3y)
		{
			x=p4x+p2x-p3x;
			y=p4y+p2y-p3y;
		}
		
		cout << fixed << setprecision(3) << x << " " << y << endl;
	}
	return 0;
}