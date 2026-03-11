#include<iostream>
using namespace std;
class student
{ int marks,d,m,y;
static int id;
public:
	student()
	{   id++;
		cout<<"enter marks for students :"<<endl;
		cin>>marks;
		cout<<"enter the Birth date of students"<<endl;
		cin>>d;
		cin>>m;
		cin>>y;
	}
		void display()
	{
		cout<<"Id for the student is "<<id;
		cout<<"Marks of student is :"<<marks<<endl;
		cout<<"Date of Birth is : "<<d<<"/"<<m<<"/"<<y<<endl;
	}
};
int student::id=0;
int main()
{
	int i;
student s[10];
for(i=0;i<10;i++)
{
	s[i].display();
}
}
