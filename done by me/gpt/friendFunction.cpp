#include<iostream>
using namespace std;

class Rajdeep{
    int money=10000;//instance variable
    public:
    Rajdeep(){}
    Rajdeep(int money){
        this->money=money; //local variable assign
    }
    void display(){
        cout<<"Balance is "<<money<<endl;
    }
    friend class Shreyash;
};
class Shreyash{
  public:  
void display(Rajdeep bal){
    cout<<"balance of rajdeep is :"<<bal.money<<endl;
}
};
int main()
{
    Rajdeep B;
    B.display();
    Shreyash S;
    
    S.display(B);
    
}