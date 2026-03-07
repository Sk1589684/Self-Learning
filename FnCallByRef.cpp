#include<iostream>
using namespace std;

void run(int &x)
{
	x=12;
	cout<<"value is :"<<x<<endl;
}
int main()
{
	int a=5;
	cout<<"normal assigned value :"<<a<<endl;
	run(a);
	cout<<"changes value for a is :"<<a<<endl;
}
