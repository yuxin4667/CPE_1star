#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
using namespace std;

int deg;
void degree(string n)
{
	int sum = 0;
	string newn;

	//計算sum=個別數字總和
	for (int i = n.length() - 1; i >= 0; i--)
	{
		sum += (n[i] - '0');
	}
	
	if (sum % 9 == 0)//總合為9的倍數
	{
		deg++;
		
		//數字轉字串
		stringstream ss;
		ss << sum;
		ss >> newn;

		if (sum != 9) //總和=9，9=9*1，為degree的最後一層->return
			degree(newn);
	}
}

int main()
{
	string num;
	while (getline(cin, num))
	{
		if (num.compare("0") == 0)
			break;
		deg = 0;
		degree(num);
		
		if (deg == 0)
			cout << num << " is not a multiple of 9." << endl;
		else
			cout << num << " is a multiple of 9 and has 9-degree " << deg << "." << endl;
	}
	return 0;
}