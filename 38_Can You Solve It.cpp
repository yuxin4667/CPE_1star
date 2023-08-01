#include <iostream>
using namespace std;
 int main()
 {
 	int data, ca=0;
 	cin >> data;
 	while(data--)
 	{
 		int sx, sy, dx, dy, sdis=0, ddis=0;
 		cin >> sx >> sy >> dx >> dy;
 		cout << "Case " << ++ca << ": ";

 		//(0, 0)->source 
		//1.(0, 0)->和(sx, sy)同一斜排，但x=0的點(0, y)
		//0+y=sx+sy
 		for(int i=0;i<=sx+sy;i++)
 		{
 			sdis+=i; //1+2+...+y=sdis
 		}
 		//2.(0, y)->(sx, sy)
 		sdis+=sx;//往左上角
 		
		//(0, 0)->destination
		//1.(0, 0)->和(dx, dy)同一斜排，但x=0的點(0, y)
		//0+y=dx+dy
 		for(int i=0;i<=dx+dy;i++)
 		{
 			ddis+=i;//1+2+...+y=ddis
 		}
 		//2.(0, y)->(dx, dy)
 		ddis+=dx;
 
 		cout << ddis-sdis << endl;
 	}
 	return 0;
 }