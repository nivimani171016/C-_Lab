#include<iostream>
using namespace std;
int main()
{
int n = 100,i;
cout<<"The number divisible by 3 within 100 are";
while(n>=0)
{
	if(n%3==0)
	{
		cout <<n;
		cout <<"\n";
	}
	n--;
	
}

return 0;
}
	