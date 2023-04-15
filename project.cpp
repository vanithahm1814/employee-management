#include<iostream>
#include "headers/operations.h"
#include<list>
using namespace std;

int main()
{
   list<Employee>EmpList;
   Employee *emp;
   int ch,key;
   do{
   	cout<<"\n 1 create \n 2 update \n 3 search ";
    cout<<"\n 4 delete \n 5 display \n 6  exit";
    cout<<"\n enter the choice=";
    cin>>ch;
    switch(ch)
    {
    	case 1: cout<<"\n creating an object......\n";
    	        createEmployee(EmpList);
    	        break;
    	case 2:cout<<"\n enter empid to search=";
    	        cin>>key;
    	        updateEmployee(EmpList,key);
    	        break;
    	case 3: cout<<"\n enter empid to search=";
    	        cin>>key;
    	        emp=searchEmployee(EmpList,key);
    	        if(emp==NULL)
    	          cout<<"\n employee doesnt exist\n";
    	        else
    	          emp->display();
    	          break;
    	case 4: cout<<"\n enter empid to search=";
    	        cin>>key;
    	        deleteEmployee(EmpList,key);
    	        break;
    	case 5: displayEmployee(EmpList);
    	        break;
    	case 6:break;
	}
   }while(ch!=6);
   
}
