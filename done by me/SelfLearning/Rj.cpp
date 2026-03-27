#include<iostream>
using namespace std;

class Rajdeep
{
    private:
    int money;

    public:
    Rajdeep(){
    	cout<<"no argument constructor is called   "<<endl;
	}
//  //  Rajdeep(int money){
//        this->money=money;
//        
//    }

void setMoney(int money)
{
	this->money=money;
	
}
int getMoney()
{
	return money;
}
void display(){
	cout<<"Display money"<<money<<endl;

}
friend class Rohan;

	
};
class Rohan{
	public:
	void display(Rajdeep obj){
	
	cout<<"Rajdeep Balance"<<obj.money<<endl;
}
	
};

    int main()
    {
    	Rajdeep A;
    	A.setMoney(10000);
    	A.getMoney();
    	A.display();
    	Rohan B;
    	B.display(A);
    	
    	 
	}

    
    

