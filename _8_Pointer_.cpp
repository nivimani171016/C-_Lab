#include<iostream>
using namespace std;
int  main()
{
int num = 15;
int *ptr;
ptr = &num;
cout <<"The variable stores the value : " <<num ;
cout <<"\nThe address of the variable is : " <<ptr;
cout <<"\nChanged or Modified variable value using the pointer is : ";
*ptr = 10;
cout <<*ptr;
return 0;
}