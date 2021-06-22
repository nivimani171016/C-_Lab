#include<iostream>
using namespace std;
int main()
{
int arr[]={12,56,86,12,56,5};
int *ptr;
ptr = &arr[2];
cout <<"The value stored in the index 2 is : " <<arr[2];
cout <<"\nThe value stored in the pointer is : " <<*ptr;
cout <<"\nThe address of the variable stored to the pointer is : " <<ptr;
return 0;
}