#include<iostream>
using namespace std;
class Parent1{
    
    int date;
    public:
    Parent1(){
        cout<<"No arg is called of parent1"<<endl;
    }
    Parent1(int date){
        this->date=date;
    }
    void display(){
        cout<<"Enter day is :"<<endl;
        cin>>date;
        cout<<"Day is "<<date<<endl;

    }

};
class Parent2{
    int age;
    public:
    Parent2(){
        cout<<"Parent2 no arg constr"<<endl;
    }
    Parent2(int age){
        this->age=age;
    }
    void display(){
        cout<<"Age is :";
        cin>>age; 
        cout<<"Age is "<<endl;   
    }
};
class Child:public Parent1,public Parent2{
int bdate;
    public:
Child(){
    cout<<"No arg constr is called"<<endl;

}
Child(int date,int age,int bdate):Parent1(date),Parent2(age)
{
    this->bdate=bdate;
}
void display(){
    Parent1::display();
    Parent2::display();
    cout<<"Bdate is :"<<endl;
    cin>>bdate;
    cout<<"Bdate is :"<<bdate<<endl;
    
}
};
int main(){
    Child c1;

    c1.display();
}