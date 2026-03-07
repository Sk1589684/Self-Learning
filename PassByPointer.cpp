#include<iostream>
using namespace std;

void pointer(int *ptr,int *ptr2)
{
	*ptr=10;
	*ptr2=12;
}
int main()
{
	int a=15,b=10;
	cout<<"Value of a is:"<<a<<endl;
	cout<<"Value of b is:"<<b<<endl;
	pointer(&a,&b);
	cout<<"after reference value of a is :"<<a<<endl;
	cout<<"after reference value of b is :"<<b<<endl;
}
