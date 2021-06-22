#include<iostream>
using namespace std;
class Classroom
{
//Creating a class
public:
//Variable Declaration
int roll_num;
string name;

//Method
void printStudent()
{
	roll_num = 14;
	name = "Jumbo";
	cout <<"\nThe roll number is : " <<roll_num;
	cout <<"\nThe name of the student is : " <<name;
}
void printStudent(int r_n,string n)
{
	roll_num = r_n;
	name = n;
	cout <<"\nThe roll number is : " <<r_n;
	cout <<"\nThe name of the student is : " <<n;
}
	
};
int main()
{
Classroom stu;
stu.roll_num=12;
stu.name="Bunny";
cout <<"\n\nThe direct variable initialization value is displayed";
cout <<"\nThe roll number of the student is : " <<stu.roll_num;
cout <<"\nThe name of the student is : " <<stu.name;
cout <<"\n\nThe variable using the method without argument ";
stu.printStudent();
cout <<"\n\nThe variable using the method with argument ";
stu.printStudent(56,"Dumpy");
return 0;
}