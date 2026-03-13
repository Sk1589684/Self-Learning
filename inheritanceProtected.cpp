#include<iostream>
using namespace std;

class parent{
	int a=1,b=2;//instance variable;
	public:
		int c=10;
		
	void display(){
		cout<<"A is "<<a;
		cout<<"C is "<<c;
	}
	};
class child: protected parent
{	public:
	int d=2;
};

int main()
{
	parent p1;
	p1.display();
}
