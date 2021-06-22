#include<iostream>
using namespace std;
class Employee
{
public:
string name;
int salary;
string designation;

//Default Constructor
Employee()
{
name = "Cladia";
salary = 45000;
designation = "Snr Contractor";
}

//Method 
void printEmployee()
{
cout <<"Name : " <<name <<endl;
cout <<"Salary : " <<salary <<endl;
cout <<"Designation : " <<designation <<endl;
}
};
int main()
{
	cout <<"The details from the constructor" <<endl;
	Employee e1;
	e1.printEmployee();
	return 0;
}