#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int N=n;//數字個數
		int a[n];//儲存數字的陣列
		while(n--)
			cin >> a[n];
		sort(a,a+N);//數字從小到大排

		int mid1, mid2, num=0;
		//中位數
		if(N%2==1)
		{
			mid1=a[(N-1)/2];
			mid2=mid1;
		}
		else
		{
			mid1=a[(N/2)-1];
			mid2=a[(N/2)];
		}

		int count=0;
		for(int i=0;i<N;i++)
		{
			if(a[i]==mid1 || a[i]==mid2)
				count++;
		}
		cout << mid1 << " " << count << " " << mid2-mid1+1 << endl;
	}
	return 0;
} 