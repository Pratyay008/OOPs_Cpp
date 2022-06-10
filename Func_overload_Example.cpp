// Write a function setpara for function overloading      Clg lab----> 31/03/2022

#include<bits/stdc++.h>
using namespace std;

class Employee{
    int id, bonus, time;
    public:
        void setpara(){
            cout<<"1st employee Enter ID, bonus, time : "<<endl;
            cin>>id>>bonus>>time;
            cout<<"ID is : "<<id<<", Bonus is : "<<bonus<<", Time is : "<<time<<endl;
            cout<<endl;
        }

        void setpara(int id){
            this->id=id;
            cout<<"ID is : "<<id<<endl;
            cout<<endl;
        }
        
        void setpara(int id, int bonus){
            this->id=id;
            this->bonus=bonus;
            cout<<"ID is : "<<id<<", Bonus is : "<<bonus<<endl;
            cout<<endl;
        }
        
        void setpara(int id, int bonus, int time){
            this->id=id;
            this->bonus=bonus;
            this->time=time;
            cout<<"ID is : "<<id<<", Bonus is : "<<bonus<<", Time is : "<<time<<endl;
        }
};



int main()
{
    int id, bonus, time;

    Employee e1;
    e1.setpara();

    Employee e2;
    cout<<"2nd employee : Enter ID : "<<endl;
    cin>>id;
    e2.setpara(id);

    Employee e3;
    cout<<"3rd employee : Enter ID, bonus : "<<endl;
    cin>>id>>bonus;
    e3.setpara(id, bonus);

    Employee e4;
    cout<<"4th employee : Enter ID, bonus, time : "<<endl;
    cin>>id>>bonus>>time;
    e4.setpara(id, bonus, time);

    return 0;
}
