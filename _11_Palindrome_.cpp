#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
string input;
cout <<"Enter the word :  " <<endl;
cin >>input;
string word = input;
reverse(input.begin(),input.end());
cout <<"The reverse order is:" <<input;
if (word == input)
{
	cout <<"\nThe word entered is a palindrome ";
}
else
{
	cout <<"\nThe word given is not a palindrome ";
}
return 0;
}
