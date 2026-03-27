#include<iostream>
using namespace std;

int main()
{
	int a[5]={1,2,3,4,5};
	int *ptr;
	ptr=a;//assign the address of pointer to array
	cout<<"Accessing the array using pointer subscript"<<endl;
	
	for(int i=0;i<5;i++)
	cout<<"element at index i ="<<i<<ptr[i]<<endl;
	
/*	for(i=0;i<n;i++)
	cout<<"element at index i ="<<i<<*(ptr+i);*/
	for(int i=0;i<5;i++)
	cout<<"element at index i ="<<i<<(ptr+i)<<endl;
	
}
