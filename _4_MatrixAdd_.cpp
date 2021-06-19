#include <iostream>
using namespace std;
int main()
{
int i,j;
int a[3][4];
int b[3][4];
int c[3][4];
cout <<"Enter the elements of the first array: \n";
for (i=0;i<3;i++)
{
	for (j=0;j<4;j++)
	{
		cin >>a[i][j];
	}
}
cout <<"Enter the elements of the second array: \n";
for (i=0;i<3;i++)
{
	for (j=0;j<4;j++)
	{
		cin >>b[i][j];
	}
}
cout <<"The 1st array is : \n";
for (i=0;i<3;i++)
{
	cout <<"\n"; 
	for (j=0;j<4;j++)
	{
		cout <<a[i][j]<<"\t";
	}
}
cout <<"\n";
cout <<"The 2rd array is : \n";
for (i=0;i<3;i++)
{
	cout <<"\n"; 
	for (j=0;j<4;j++)
	{
		cout <<b[i][j]<<"\t";
	}
}
cout <<"\n";
cout <<"The sum of the matrix elements is \n";

for (i=0;i<3;i++)
{
	for (j=0;j<4;j++)
	{
		c[i][j]=0;
		for (int k=0;k<4;k++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
for (i=0;i<3;i++)
{
	cout <<"\n"; 
	for (j=0;j<4;j++)
	{
		cout <<c[i][j]<<"\t";
	}
}
return 0;
}