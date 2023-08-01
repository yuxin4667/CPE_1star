#include <iostream>
using namespace std;

int main()
{
	int data;
	cin >> data;
	while(data--)
	{
		int M, N, Q;
		cin >> M >> N >> Q;
		char a[N][M];

		//讀取方形資料
		for(int i=0;i<M;i++)
		{
			for(int j=0;j<N;j++)
				cin >> a[i][j];
		}
		cout << M << ' '<< N << ' '<< Q << endl;
		
		//判斷邊長
		while(Q--)
		{
			int R, C;
			cin >> R >> C;
			char center=a[R][C];//中心點座標的字母
			int len=1, f=0;
			
			while(R-len>=0 && C-len>=0 && R+len<M && C+len<N)//邊界不超出方形範圍
			{
				//從左上角座標一行一行判斷到右下角
				for(int i=R-len;i<=R+len;i++)
				{
					for(int j=C-len;j<=C+len;j++)
					{
						if(a[i][j]!=center)
						{
							f=1;
							break;
						}
					}
					if(f==1)
						break;
				}	
				if(f==1)
					break;
				len++;//擴大一個邊長
			}
			len--;
			cout << len*2+1 << endl;
		}
		return 0;
	}	
} 

 