#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string DNA;
cout <<"Enter the DNA sequence : ";
cin  >>DNA;
cout <<"\nThe length of the given DNA sequence is : " << DNA.length();
string DNA1 = DNA.substr(0,6);
cout <<"\nThe DNA sequence which has to be displayed is : " <<DNA1;
return 0;
}