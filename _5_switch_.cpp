#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char operation;
	cout <<"Enter a : ";
	cin >>a;
	cout <<"Enter b : ";
	cin >>b;
	cout <<"Enter the operation to be performed a/d/m/v: ";
	cin >>operation;
	
	
switch(operation)
{
	case 'a':
	cout <<"The sum of the numbers given is :";
	cout <<a+b;
	break;
	
	case 'd':
	cout <<"The difference of the numbers given is : ";
	cout <<a-b;
	break;
	
	case 'm':
	cout <<"The multiplication of the given numbers is : ";
	cout <<a*b;
	break;
	
	case 'v':
	cout <<"The divison of the given numbers is : ";
	cout <<b/a;
	break;
	
	default:
	cout <<"Choose the correct option";
	break;
	
}

	return 0;
}