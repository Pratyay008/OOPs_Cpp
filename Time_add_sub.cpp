#include<iostream>
using namespace std;

class Time{
    private:
        int hour;
        int min;
        int sec;
    public:
        Time(){
            hour=0;
            min=0;
            sec=0;
        }

        Time(int hour , int min, int sec){
            this->hour=hour;
            this->min=min;
            this->sec=sec;
        }

        Time add(Time t1, Time t2){
            Time temp;
            temp.sec = t1.sec + t2.sec;
            temp.min = t1.min + t2.min + (temp.sec/60);
            temp.hour = t1.hour + t2.hour + (temp.min/60);
            temp.sec = temp.sec%60;
            temp.min = temp.min%60;
            return temp;
        }

        Time substract(Time t1, Time t2){
            Time temp;
            temp.sec = t1.sec - t2.sec;
            temp.min = t1.min - t2.min;
            temp.hour = t1.hour - t2.hour;
            return temp;
        }

        void display(){
            cout<< hour<<" : "<<min<<" : "<<sec<<endl;
        }
};


int main()
{
    int h1,m1,s1,h2,m2,s2;
    cout<<"Enter hour for 1st object : "<<endl;
    cin>>h1;
    cout<<"Enter min for 1st object : "<<endl;
    cin>>m1;
    cout<<"Enter sec for 1st object : "<<endl;
    cin>>s1;
    cout<<"Enter hour for 2nd object : "<<endl;
    cin>>h2;
    cout<<"Enter min for 2nd object : "<<endl;
    cin>>m2;
    cout<<"Enter sec for 2nd object : "<<endl;
    cin>>s2;

    Time t1(h1,m1,s1), t2(h2,m2,s2), t3, t4;

    cout<<"The 1st time is : "<<endl; 
    t1.display();
    cout<<"The 2nd time is : "<<endl; 
    t2.display();

    t3=t3.add(t1,t2);
    cout<<"After addition the new time is : "<<endl; 
    t3.display();

    t4=t4.substract(t1,t2);
    cout<<"After substraction the new time is : "<<endl; 
    t4.display();


    return 0;
}

















