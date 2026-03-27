#include<iostream>
using namespace std;
class Employee
{
private:
    int id;
public:
    Employee(){
        id=0;
        cout<<"No Arg Constructor of Employee is called"<<endl;
    }
    Employee(int id){
        cout<<"Para Constr of Employee is Called"<<endl;
        this->id=id;

    }
   
    void display()
    {
        cout<<"Id is "<<id<<endl;
    }
    
};
class WageEmployee:public Employee
{
int hrs,rate;
public:
WageEmployee()
{
    cout<<"No arg constr of WageEmployee is called"<<endl;
    hrs=0;
    rate=0;
}
WageEmployee(int hrs,int rate,int id):Employee(id)//here for invoking the para constr of Employee we need to pass a value else it will invoke no arg constr. 
{
    this->hrs=hrs;
    this->rate=rate;
    cout<<"Para constr of WageEmployee is called"<<endl;

}
void commision();
void display()
{
    Employee::display();
    cout<<"Hours of an Employee is"<<hrs<<endl;
    cout<<"Rate per Hour is "<<rate<<endl;
}
};
 void WageEmployee::commision(){
    

}


int main()
{
    WageEmployee e1(10,150,1);
    e1.display();

}