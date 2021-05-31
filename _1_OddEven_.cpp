#include<iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Enter the number:";
	cin >>n;
	if (n<0)
	{
		cout<<"The number is negative";
	}
	else
	{
		if(n%2==0)
		{
			cout<<"The given number is an even number";
		}
		else
		{
			cout<<"The given number is an odd number";
		}
	}
return 0;
}
	