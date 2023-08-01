#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin >> n && n!=0)
	{
		int WE[4]={3, 1, 4, 6};
		int NS[4]={1, 5 ,6, 2};
		while(n--)
		{
			string str;
			cin >> str;

			if(str.compare("north")==0)
			{
				int temp=NS[0];
				for(int i=0;i<3;i++)
					NS[i]=NS[i+1];
				
				NS[3]=temp;	
				WE[1]=NS[0];
				WE[3]=NS[2];
			}
			else if(str.compare("south")==0)
			{
				int temp=NS[3];
				for(int i=3;i>0;i--)
					NS[i]=NS[i-1];
				
				NS[0]=temp;	
				WE[1]=NS[0];
				WE[3]=NS[2];
			}
			else if(str.compare("east")==0)
			{
				int temp=WE[3];
				for(int i=3;i>0;i--)
					WE[i]=WE[i-1];
				
				WE[0]=temp;	
				NS[0]=WE[1];
				NS[2]=WE[3];	
			}
			else if(str.compare("west")==0)
			{
				int temp=WE[0];
				for(int i=0;i<3;i++)
					WE[i]=WE[i+1];
				
				WE[3]=temp;
				NS[0]=WE[1];
				NS[2]=WE[3];	
			}
		}
		cout << NS[0] << endl;
	}
	return 0;
}

