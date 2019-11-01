#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n = 8;
	int num = 2;
	int r=0;
	int c=0;
	/*cout<<"请输入正整数n:";
	cin>>n;
	int** array = new int*[n];
	for(int i=0;i<n;i++)
		array[i] = new int[n];*/
	int array[8][8];

	array[r][c] = 1;
	while(true)
	{
		if(r==n-1&&c==n-1)
			break;
		if(r==0)
		{
			c = c + 1;
			array[r][c] = num;
			num = num + 1;
			while(c!=0)
			{
				r = r + 1;
				c = c - 1;
				array[r][c] = num;
				num = num + 1;
			}	
		}
		if(c==0)
		{
			r = r + 1;
			array[r][c] = num;
			num = num + 1;
			while(r!=0)
			{
				c = c + 1;
				r = r - 1;
				array[r][c] = num;
				num = num + 1;
			}	
		}

	}
	cout<<array[3][3];
}