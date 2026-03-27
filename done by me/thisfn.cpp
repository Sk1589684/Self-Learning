#include<iostream>
using namespace std;
	class Complex
	{ public:
		int real , img;
		Complex(int r,int i)
		{
			this ->real=r;
			this ->img=i;
			cout<<"real  ="<<r<<endl;
			cout<<"Complex is ="<<i<<endl;
		}
		
	};
	int main()
	{
		Complex x(2,3);
	}
