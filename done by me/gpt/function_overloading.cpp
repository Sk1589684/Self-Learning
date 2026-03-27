#include<iostream>
using namespace std;

int add(int a, int b){
	return a+b;
}
int add(int a, int b,int c){
	return a+b+c;
}
int main()
{
	int a=2,b=20,c=10;
	cout<<add(a,b)<<endl;
	
	cout<<add(a,b,c)<<endl;
	
}
