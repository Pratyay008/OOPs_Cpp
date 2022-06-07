#include<bits/stdc++.h>
using namespace std;


class Person{
    public:
        string name;
        string set_data1(string a){
            name=a;
        }


};

class Employee: public virtual Person{
    public:
        string ID;
        string set_data2(string b){
            ID=b;
        }

};

class Student: public virtual Person{
    public:
        long int roll;
        long int set_data3(long int c){
            roll=c;
        }

};


class Manager: public Employee, public Student{
    public:
        int salary;
        int set_data4(int d){
            salary=d;
        }

};

int main(){
    Manager obj;
    obj.set_data1("Pratyay");
    obj.set_data2("Noogler712409");
    obj.set_data3(16931121062);
    obj.set_data4(420000);


    cout<<"Person name is : "<<obj.name<<endl;
    cout<<"Employee ID is : "<<obj.ID<<endl;
    cout<<"Student name is : "<<obj.roll<<endl;
    cout<<"Manager salary is : "<<obj.salary<<endl;

    return 0;
}