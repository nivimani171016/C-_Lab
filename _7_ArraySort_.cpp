#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int num[]={25,69,85,12,36,75,56,49};
int leng = sizeof(num)/sizeof(num[0]);
cout <<"The length of the integer array is : " <<leng;
cout <<"\nThe sorted integer array elements are listed below \n";
sort(num , num+leng);
for (int i=0;i<leng;i++)
{
	cout <<num[i] <<"\t";
}
string alp[]={"Alpha","Omega","Gamma","Beta"};
int len = sizeof(alp)/sizeof(alp[0]);
cout <<"\n\nThe length of the string array is : " <<len;
cout <<"\nThe sorted string array elements are listed below \n";
sort (alp , alp+len);
for (int i=0;i<len;i++)
{
	cout <<alp[i] <<"\t";
}

return 0;
}