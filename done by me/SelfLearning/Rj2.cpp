#include<iostream>
using namespace std;

class Rajdeep
{
	private:
		int A;
		
		public:
			Rajdeep(){
				cout<<"No argument constructor"<<endl;
			}
			void setA(int A){
				this->A=A;
			}
			int get(){
				
				return A;
				
			}
		void display(){
	cout<<"Display Rajdeep Paisa"<<A<<endl;
}
		
};

int main(){
	Rajdeep B;
	B.setA(382735);
	B.get();
	B.display();
}

