#include<iostream>
#include<stdlib.h>
using namespace std;
//employee header
class Employee
{
	public:
		int empId;
		string empName;
		float sal;
		void setData();
		void display();
		void writeDataToFile();
};
void Employee::setData()
{
	cout<<"\n enter empid=";
	cin>>empId;
	cin.ignore();
	cout<<"\n enter empname=";
	getline(cin,empName);
	cout<<"\n enter empsal=";
	cin>>sal;
	
}
void Employee:: display()
{
	cout<<"\n empid ="<<empId;
	cout<<"\n empname ="<<empName;
	cout<<"\n empsal ="<<sal<<endl;
}
void writeDataToFile()
{
	
}
