#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int data, ca=0;
	cin >> data;//讀取資料筆數
	while(data--)
	{
		ca++;
		if(ca!=1)
			cout << endl;
		cout << "Case " << ca << ":\n";
		
		//讀取每個字母的權重(4*9陣列)
		int cost[36];
		for(int i=0;i<36;i++)
			cin >> cost[i];
		
		//讀取要判斷幾個數字
		int num;
		cin >> num;
		
		while(num--)
		{
			int n, a, maxnum=1, minsum=9999;
			int cbase[37]={0};//儲存總和最小的base是哪一個
			cin >> n;//讀取數字
			cout <<"Cheapest base(s) for number "<<n<<":";
			
			//找出10進位數字中最大的數字為何(base最小為最大的數字+1)
			a=n;
			while(a>0)
			{
				if(a%10>=maxnum)
					maxnum=a%10;
				a/=10;
			}
			
			//從maxnum+1進位計算到36進位
			for(int i=++maxnum;i<=36;i++)
			{
				int base[37]={0};//儲存轉成i進位後，該數字(0~maxnum)出現的次數
				a=n;
				while(a>0)
				{
					base[a%i]++;//a%i=會出現的數字
					a/=i;
				}
				
				int sum=0;
				for(int j=0;j<=36;j++)
				{
					sum+=(cost[j]*base[j]);//(權重*數字出現的次數)之和=總和
				}
			
				if(sum<=minsum)
				{
					//若較小則設為minsum，並清除先前紀錄的最小值
					if(sum<minsum)
					{
						minsum=sum;
						for(int k=0;k<i;k++)
							cbase[k]=0;
					}
					cbase[i]=1;
				}
				
			}
			for(int j=0;j<=36;j++)
			{
				if(cbase[j]==1)
					cout << " " << j;
			}
			cout << endl;
		}		
	}
	return 0;
}