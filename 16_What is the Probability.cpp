#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip> //io control
using namespace std;

int main()
{
	int data;
	cin >> data;
	while(data--)
	{	
		int player, p; //總玩家數, 第p位玩家
		double win, lose, f;//贏, 輸, 最終機率
		cin >> player >> win >> p;
		lose=1-win;
		double a=pow(lose, p-1)*win;//首項
		double r=pow(lose, player);//公比
		if(r==1) //win=0
		{
			cout << "0.0000" << endl;
			continue;
		}
		f=a/(1-r);
		printf ("%.4f", f); cout << endl;
	}
	return 0;
}