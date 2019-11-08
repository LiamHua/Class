#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

void twopart()
{
	double x;
	double x1 = 1,x2 = 3;
	double g,g1,g2;
	g1 = x1*x1*x1 - 3*x1 - 1;
	g2 = x2*x2*x2 - 3*x2 - 1;
	if(g1*g2 < 0)
	{
		do
		{
			x = (x1 + x2)/2;
			g = x*x*x - 3*x -1;
			if(g1*g < 0)
			{
				x2 = x;
				//g2 = g;
			}
			else
			{
				x1 = x;
				g1 = g;
			}
		}while(abs(x1-x2)<0.0000001);
		cout<<setprecision(8)<<x<<endl;
		cout<<setprecision(8)<<x-2*cos(20*3.1415926/180)<<endl;
	}
	else
		cout<<"此方程无解"<<endl;
}
int main()
{
	twopart();
}