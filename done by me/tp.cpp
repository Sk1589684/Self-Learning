#include<iostream>
using namespace std;
class employee
{	int id,sal;//instance variable is used:
static int year;//static variable is used:
public://class is made public:
	employee()//No argument constructor is used:
	{
		cout<<"No arg constructor is called"<<endl;
		id=37;
		sal=50000;
	}
	employee(int i,int s)//parametarized constructor is used:
	{
		cout<<"Parametarized constructor is called "<<endl;
		id=i;
		sal=s;
	
	}
	void display()
	{
		cout<<"employee id is  :"<<id<<endl<<"& salary is  :"<<sal<<endl;
	}
	static void setYear(int y)//static function is used:
	{
		year=y;
	}
	int getYear()
	{
		return year;
	}
};
int employee::year;//static function is defined for allocating memory in data section:
int main()
{
	employee e1;
	e1.display();
	employee e2(02,50000);
	e2.display();
	e2.setYear(2026);
	int x =e2.getYear();
	cout<<"year is :"<<x<<endl;
}
