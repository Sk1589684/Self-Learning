#include<iostream>
using namespace std;

class Student
{
	int rollNo;
	float marks;
	public:
		Student()
		{
			cout<<"No arg constructor is called"<<endl;
			
			rollNo=100;
			marks=89.1f;
			
		}
		void display()
		{
			cout<<"roll no is ="<<rollNo<<endl;
			cout<<"marks are ="<<marks<<endl;
		}
};
int main()
{
	Student * ptr = new Student();//Syntax=ClassName*ptr=new ClassName();  FOR executing in runtime memory ;
	ptr->display();
}

