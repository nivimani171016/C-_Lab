#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int  main()
{
string DNA;
cout<<"Enter the DNA sequence:";
cin >>DNA;
reverse(DNA.begin(),DNA.end());
cout<<"\nThe reverse Dna is : "<<DNA;
return 0;
}