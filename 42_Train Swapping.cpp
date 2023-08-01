#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	int data;
	cin >> data;
	while(data--)
	{
		int L, count=0;
		cin >> L;

		int train[L];
		for(int i=0;i<L;i++)
		{
			cin >> train[i];
		}
		for(int i=0;i<L-1;i++)
		{
			for(int j=i+1;j<L;j++)
			{
				if(train[i]>train[j])
				{
					count++;
					swap(train[i], train[j]);
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", count);
	}
	return 0;
}