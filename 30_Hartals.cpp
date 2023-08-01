#include <iostream>
using namespace std;

int main()
{
	int data;
	cin >> data;
	while(data--)
	{
		int N, h;
		int hnum[101];
		
		cin >> N;//幾天內
		cin >> h;//幾個party
		
		//記錄隔幾天的陣列
		for(int i=1;i<=h;i++)
		{
			cin >> hnum[i];
		}
		
		int p[N+1]={0};//第N+1天有幾個party
		for(int j=1;j<=h;j++)
		{
			for(int i=1;i<=N;i++)
			{
				if(i%hnum[j]==0)
					p[i]++;
			}
		}
		
		int count=0;
		for(int i=1;i<=N;i++)
		{
			if(p[i]!=0 && i%7!=6 && i%7!=0)//當天有party 且 非週五 且 非週六
				count++;
		}
		
		cout << count << endl;
	}
	return 0;
}